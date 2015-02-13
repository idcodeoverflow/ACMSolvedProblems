#include <stdio.h>
#define N (char)00
inline bool is_letter(char c)
{
	return (c > '9' || c < '0');
}
inline bool is_valid(int a)
{
	return a >= 0 && a <= 255;
}
inline int replace(char *v)
{
	int i = 0, n = 0;
	for(; v[i] != N; i++)
		if(v[i] == '.')
		{
			v[i] = ' ';
			n++;
		} else if(is_letter(v[i]))
			return -1;
	return n;
}
int main()
{
	int t = 0, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, n = 0;
	char v[50];
	scanf("%d", &t);
	while(t--)
	{
		a = 1000;
		b = 1000;
		c = 1000;
		d = 1000;
		e = 1000;
		f = 1000;
		scanf("%s", &v);
		n = replace(v);
		if(n == 3)
		{
			sscanf(v, "%d %d %d %d", &a, &b, &c, &d);
			if(is_valid(a) && is_valid(b) && is_valid(c) && is_valid(d))
				printf("SI\n");
			else
				printf("NO\n");
		}
		else if(n == 5)
		{
			sscanf(v, "%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
			if(is_valid(a) && is_valid(b) && is_valid(c) && is_valid(d) && is_valid(e) && is_valid(f))
				printf("SI\n");
			else
				printf("NO\n");
		}
		else
			printf("NO\n");
	}
	return 0;
}

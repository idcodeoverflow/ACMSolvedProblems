#include <stdio.h>
#define N (char)00
char v[128], s[103], c, a;
int i = 0, t = 0;
int main()
{
	for(a = 'A', c = 'a'; a <= 'Z'; a++, c++)
	{
		v[a] = c;
		v[c] = a;
	}
	scanf("%d", &t);
	while(t--)
	{
		scanf("%s", s);
		for(i = 0; s[i] != N; i++)
			s[i] = v[s[i]];
		printf("%s\n", s);
	}
	return 0;
}

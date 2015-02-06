#include <stdio.h>
#define N (char)00
#define MIN(A, B) ((A) > (B)) ? (B) : (A)
typedef unsigned long long ull;
int a = 0, b = 0, c = 0;
char v[150003];
inline void count(char *v)
{
	int i = 0;
	a = 0;
	b = 0;
	c = 0;
	for(; v[i] != N; i++)
		switch(v[i])
		{
			case 'a':
				a++;
				break;
			case 'b':
				b++;
				break;
			case 'c':
				c++;
				break;
		}
}
inline ull ways()
{
	ull min = MIN(a, b);
	min = MIN(min, c);
	return min * min * min;
}
int main()
{
	scanf("%s", v);
	count(v);
	printf("%llu", ways());
	return 0;
}

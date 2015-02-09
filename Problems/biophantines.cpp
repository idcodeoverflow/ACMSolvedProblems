#include <stdio.h>
inline int gcd(int a, int b)
{
	int m = 0;
	while(b)
	{
		m = a % b;
		a = b;
		b = m;
	}
	return a;
}
int main()
{
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	while((a || b))
	{
		printf("%s\n", ((c % gcd(a, b)) ? "NO" : "YES"));
		scanf("%d %d %d", &a, &b, &c);
	}
	return 0;
}

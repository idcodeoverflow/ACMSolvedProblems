#include <stdio.h>
#include <math.h>
#define MOD 1000000007
int m[3001][3001], v[31];
inline int level(int n)
{
	return (int)(log(n) / log(2));
}
inline int used(int n, int l)
{
	int i = 0, s = 0;
	for(; s <= n; i++)
		s += v[i];
	s -= v[i - 1];
	return n - s;
}
inline int pw(int n)
{
	return (0x000001 << n);
}
inline void pascal(int n)
{
	int i = 0, j = 0, index = 0;
	m[0][0] = 1;
	for(i = 1; i <= n; i++)
		for(j = 0; j <= i; j++)
			m[i][j] = (((j - 1 >= 0) ? m[i - 1][j - 1] : 0) % MOD + ((m[i - 1][j]) ? m[i - 1][j] : 0) % MOD) % MOD;
}
int main()
{
	int t = 0, n = 0, l = 0, r = 0;
	pascal(3000);
	
	for(t = 0; t < 31; t++)
		v[t] = 0x000001 << t;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		l = level(n);
		r = used(n, l);
		printf("%d\n", m[pw(l)][r] - 1);
	}
	return 0;
}

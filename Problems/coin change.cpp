#include <stdio.h>
#include <string.h>
#define TOT_COINS 5
#define MIN(A, B) ((A < B) ? (A) : (B))
const long aiCoins[TOT_COINS] = {1, 5, 10, 25, 50};//ascending order
long c[8000], s[8000];
long h[8000];
long counting_change(long iN)
{
	if(h[iN])
		return h[iN];
	long i = 0, j = 0, aiChange[200000];
	memset(aiChange,0,sizeof(aiChange));
	aiChange[0] = 1;
	for(;i < TOT_COINS; i++)
		for(j = aiCoins[i]; j <= iN; j++)
			aiChange[j] += aiChange[j - aiCoins[i]];
	h[iN] = aiChange[iN];
	return h[iN];
}
long x = 0;
int main()
{	
	while(scanf("%ld", &x) != EOF)
	{
		printf("%ld\n", counting_change(x));
	}
	return 0;
}

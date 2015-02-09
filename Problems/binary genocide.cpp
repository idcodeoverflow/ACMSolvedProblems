#include <stdio.h>
inline short count_bin_ones(unsigned long long n)
{
	int i = 0;
	while(n)
	{
		if(n & 1)
			i++;
		n >>= 1;
	}	
	return i;
}
int main()
{
	int n = 0, count = 0;
	while(scanf("%d",&n) != EOF)
		if(!(count_bin_ones(n) & 1))
			count++;
	printf("%d\n",count);
	return 0;
}

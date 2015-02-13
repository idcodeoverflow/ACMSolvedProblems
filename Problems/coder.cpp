#include <stdio.h>
int n = 0;
int main()
{
	scanf("%d",&n);
	if(n & 1)
		printf("%d",(n * n >> 1) + 1);
	else
		printf("%d",(n * n >> 1));
		
	return 0;
}

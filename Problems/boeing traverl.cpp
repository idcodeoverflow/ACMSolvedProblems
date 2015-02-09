#include <stdio.h>
int main()
{
	int t = 0, a = 0, n = 0, b = 0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&a,&n);
		b = (a + n * (n - 1) / 2) % n;
		if(b == 0)
			printf("%d\n", n);
		else
			printf("%d\n", b);
	}
	return 0;
}

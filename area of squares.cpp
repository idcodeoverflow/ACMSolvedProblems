#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int t = 0, a = 0, n = 0, i = 0;
	double r = 0.0;
	scanf("%d",&t);
	t = abs(t);
	for(i = 1; i <= t; i++)
	{
		scanf("%d%d",&a,&n);
		a = abs(a);
		n = abs(n);
		r = pow(a, 2.0) / pow(2.0, n - 1.0);
		printf("Case #%d: %.2lf\n", i, r);
	}
	return 0;
}

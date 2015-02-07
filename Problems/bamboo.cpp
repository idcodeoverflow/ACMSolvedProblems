#include <stdio.h>
#include <math.h>
#define EP 0.001
#define IN 0.00001
int t = 0, i = 0;
double h = 0.0, d = 0.0, s = 0.0;
double obtener_c()
{
	double c = 0.0, a = 0.0, b = 0.0, A = 0.0, B = 0.0;
	for(A = 0.00; A < 1.0; A += IN)
	{
		a = A * h;
		b = (1.0 - A) * h;
		if(a < b)
			c = sqrt(b * b - a * a);
		else
			c = sqrt(a * a - b * b);
		if(fabs(d - c) <= EP)
			break;
	}
	return a;
}
int main()
{
	scanf("%d", &t);
	for(; i < t; i++)
	{
		scanf("%lf %lf",&h,&d);
		h = obtener_c();
		printf("%.1lf\n",h);
		s += h;
	}
	printf("%.1lf\n",(double)(s/t));
	return 0;
}

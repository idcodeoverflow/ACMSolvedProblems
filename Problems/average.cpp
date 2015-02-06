#include <stdio.h>
#include <stdlib.h>

inline int comp(const void *a, const void *b)
{
	return *(int *) a - *(int *) b;
}

inline void lInsert(int n, int * v, int size)
{
	if(v[size - 1] > n)
	{
		v[size - 1] = n;
		qsort(v, size, sizeof(int),comp);
	}
}

inline void hInsert(int n, int * v, int size)
{
	if(v[0] < n)
	{
		v[0] = n;		
		qsort(v, size, sizeof(int),comp);
	}
}

inline void setL(int size, int *v)
{
	for(register int i = 0; i < size; i++)
		v[i] = 999999999;
}

inline void setH(int size, int *v)
{
	for(register int i = 0; i < size; i++)
		v[i] = 0;
}


int main()
{
	int h = 0, n = 0, l = 0, lower[20], higher[20], aux = 0, i = 0;
	double mean = 0.0;
	
	scanf("%d %d %d",&h,&l,&n);
	while(n)
	{
		mean = 0.0;
		
		setL(l, lower);
		setH(h, higher);
		
		for(i = 0; i < n; i++)
		{
			scanf("%d",&aux);
			mean += aux;
			
			hInsert(aux, higher, h);
			lInsert(aux, lower, l);
		}
		
		for(i = 0; i < l; i++)
			mean -= lower[i];
			
		for(i = 0; i < h; i++)
			mean -= higher[i];
			
		mean /= n - h - l;
		
		printf("%.6lf\n",mean);
		
		scanf("%d %d %d",&h,&l,&n);
	}
	
	return 0;
}

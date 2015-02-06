/*
AUTHOR: DAVID ISRAEL GARCIA ALCAZAR
*/
#include <stdio.h>
#define ROOT 708

int main()
{
	int t = 0, n = 0, i = 0, j = 0, half = 0, primes[400];
	bool cond = false;
	register double div = 0;
	
	primes[0] = 2;
	//obtener numeros primos
	for(i = 3; i < ROOT; i += 2)
    {
          cond = false;
          half = i >> 1;
          for(j = 3; j <= half; j++)
          {
                 if(i % j == 0)
                      cond = true;     
          }
          if(!cond)
          {
                   n++;
                   primes[n] = i;
          }
    }
	
	
	
	scanf("%d",&t);
	
	for(; t > 0; t--)
	{
		scanf("%d",&n);
		half = n >> 1;
		
		     for(i = 1; primes[i] <= half; i++)
    		{
    			if(n % primes[i] == 0)
    				div *= ;
    		}
	
		printf("%.0lf\n",div - 1);
		div = 1;
		
	}
	
	
	
	
	return 0;
}

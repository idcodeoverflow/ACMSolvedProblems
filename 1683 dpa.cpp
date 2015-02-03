//David Israel García Alcázar
//ID_codeoverflow
//DPA

#include <stdio.h>


int main()
{
    register int c = 0, n = 0, s = 0, half = 0, i = 0;
    
    scanf("%d",&c);
    for(; c > 0; c--)
    {
          scanf("%d",&n);
          half = n >> 1;
          
          for(i = 1; i <= half; i++)
                s += (n % i == 0) ? i : 0;
          
          if(s < n)
               printf("Deficient\n");
          else if(s == n)
               printf("Perfect\n");
          else
              printf("Abundant\n");
                
                
                
          s = 0;
               
          
    }
    
    return 0;   
}

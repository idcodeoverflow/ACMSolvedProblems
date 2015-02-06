//David Israel García Alcázar
//ID_codeoverflow
//3n + 1

#include <stdio.h>

inline int f(int n)
{
       register int it = 1;
       
       while(n != 1)
       {
               if(n & 1)
                    n = (n << 1) + n + 1;
               else
                   n >>= 1;
               it++;
       }
       
       return it;
}

int main()
{
    int a = 0, b = 0, big = 0, n = 0;
    
    while(scanf("%d%d",&a,&b) != EOF)
    {
                              if(a > b)
                              {
                                   for(int i = b; i <= a; i++)
                                  {
                                          n = f(i);
                                          if(big < n)
                                               big = n;       
                                  }    
                              }
                              else     
                              for(int i = a; i <= b; i++)
                              {
                                      n = f(i);
                                      if(big < n)
                                           big = n;       
                              }                   
                              
                              printf("%d %d %d\n",a,b,big);
                              
                              big = 0;
    }
    
    
    return 0;   
}

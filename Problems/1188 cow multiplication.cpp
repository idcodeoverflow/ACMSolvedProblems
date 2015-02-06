//David Israel García Alcázar
//ID_codeoverflow
//1188 COW MULTIPLICATION

#include <stdio.h>


int main()
{
    register int a = 0, b = 0, sa = 0, sb = 0, sum = 0;
    int va[10], vb[10];
    
    scanf("%d%d",&a,&b);
    
    while(a > 0)
    {
            va[sa] = a % 10;
            sa++;
            a /= 10;
    }
    
    while(b > 0)
    {
            vb[sb] = b % 10;
            sb++;
            b /= 10;
    }
    
    
    for(b = 0; b < sb; b++)
          for(a = 0; a < sa; a++)
                sum += va[a] * vb[b];
                
    printf("%d",sum);
    
    return 0;   
}

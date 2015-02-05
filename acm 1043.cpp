//David Israel García Alcázar
//ID_codeoverflow
//1273 domino factory

#include <stdio.h>

int main()
{
    int n = 0, l = 0, h = 0, t = 0;
    
    scanf("%d",&t);
    
    for(; t > 0; t--)
    {
          scanf("%d%d%d",&n,&l,&h);
          printf("%d\n",(((n + 1) * (n + 2)) >> 1) * h * l); 
    }
    
    return 0;
}

//David Israel García Alcázar
//ID_codeoverflow
//1441 egypt

#include <math.h>
#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    
    scanf("%d%d%d",&a,&b,&c);
    
    while(a != 0 && b != 0 && c != 0)
    {
            if(a > b)
                 a ^= b;
                 b ^= a;
                 a ^= b;
            if(b > c)
                 b ^= c;
                 c ^= b;
                 b ^= c;
            printf("%s\n",(( a*a + b*b ) == c*c ) ? "right" : "wrong");
            scanf("%d%d%d",&a,&b,&c);
    }
    
    return 0;
}

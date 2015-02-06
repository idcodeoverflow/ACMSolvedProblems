//David Israel García Alcázar
//ID_codeoverflow
//mean median problem

#include <stdio.h>


int main()
{
    
    int a = 0, b = 0;
    
    
    scanf("%d%d",&a,&b);
    
    while( a != 0 && b != 0)
    {
           printf("%d\n",a * 2 - b);
           scanf("%d%d",&a,&b);
    }
    
    return 0;   
}

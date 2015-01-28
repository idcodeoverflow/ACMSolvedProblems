//David Israel García Alcázar
//ID_codeoverflow
//bijele

#include <stdio.h>


int main()
{
    int pieces[5], t = 0, j = 0;
    
    scanf("%d",&t);
   
    for(j = 0; j < t; j++)
    {
          scanf("%d %d %d %d %d %d", &pieces[0],&pieces[1],&pieces[2],&pieces[3],&pieces[4],&pieces[5]);
          printf("%d %d %d %d %d %d\n",1 - pieces[0],1 - pieces[1],2 - pieces[2],2 - pieces[3],2 - pieces[4], 8 - pieces[5]);
          
    }
   
    return 0;    
}


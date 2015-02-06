//David Israel García Alcázar
//ID_codeoverflow
//ACM SCORING

#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b)
{
    return *(int *) a - *(int *) b;
}

int main()
{
    int t = 0, n = 0, penalty = 0, time = 0, problems[1000], i = 0, total = 0;
    
    scanf("%d",&t);
    
    for(;t > 0; t--)
    {
           scanf("%d %d",&time,&n);
           total = 5;
           penalty = 0;
           for(i = 0; i < n; i++)
                 scanf("%d",&problems[i]);
           qsort(problems,n,sizeof(int),comp);
           for(i = 0; total + problems[i] <= time && i < n; i++)
           {
                 total += problems[i];
                 penalty += total;
           }
           printf("%d %d\n",i,penalty);
    }
    
       
    return 0;
}

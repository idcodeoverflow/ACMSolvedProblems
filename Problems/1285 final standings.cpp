//David Israel García Alcázar
//ID_codeoverflow
//Final Standings


#include <stdio.h>
#include <algorithm>

using namespace std;

struct team{
       int id;
       int solved;       
       
};


bool comp(const team &a, const team &b)
{
    return a.solved < b.solved;   
}


int main()
{
    int n = 0;
    
    scanf("%d",&n);
    
    team teams[n];
    
    for(register int i = 0; i < n; i++)
                 scanf("%d%d",&teams[i].id,&teams[i].solved);
                 
    printf("f");
    sort(teams, teams + n, comp);
    
    for(register int i = 0; i < n; i++)
                 scanf("%d %d\n",teams[i].id,teams[i].solved);
    
    
    scanf("%d",&n);
    
    return 0;   
}

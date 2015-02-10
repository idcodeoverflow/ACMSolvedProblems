//David Israel García Alcázar
//ID_codeoverflow
//Changing city

#include <iostream>
#define UN(A) (A < 0) ? (int) A * -1 : A


using namespace std;

int mat[21][21];

int main()
{
    int n = 0, m = 0, i = 0, a = 0, b = 0, j = 0, del = 0;
    
    cin>>n>>m;
    
    n = UN(n);
    m = UN(m);
    
    
    for(i = 1; i <= m; i++)
    {
          cin>>a>>b;
          a = UN(a);
          b = UN(b);
          
          mat[a][b] = i;
    }
    
    for(i = 1; i <= m; i++)
          for(j = 1; j <= m; j++)
                if(mat[i][j])
                 if(i < j && mat[j][i] > mat[i][j])
                      del++;
    cout<<del;  
                
          
    
    
    
    return 0;
}

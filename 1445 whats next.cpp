//David Israel García Alcázar
//ID_codeoverflow
//Whats next
#include <iostream>

using namespace std;

int main()
{
    
    register int a = 0, b = 0, c = 0, result = 0;
    
    cin>>a>>b>>c;
    
    
    while(a != 0 && b != 0 && c != 0)
    {
            if( (b << 1) - a == c)
            {
                result = (c << 1) - b;
                cout<<"AP "<<result<<endl;
            }
            else if(b / a * b == c)
            {
                 result = b / a * c;
                 cout<<"GP "<<result<<endl;
            }                
           cin>>a>>b>>c;
    }
    
    
    
    return 0;
}

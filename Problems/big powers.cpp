#include <iostream>

using namespace std;

int main()
{
  long long t = 0, a = 0, b = 0, a2[4], a3[4], a7[4], a8[4], pos = 0;
  //n/4
  a2[0] = 2;
  a2[1] = 4;
  a2[2] = 8;
  a2[3] = 6;
  
  a3[0] = 3;
  a3[1] = 9;
  a3[2] = 7;
  a3[3] = 1;
  
  a7[0] = 7;
  a7[1] = 9;
  a7[2] = 3;
  a7[3] = 1;
  
  a8[0] = 8;
  a8[1] = 4;
  a8[2] = 2;
  a8[3] = 6;
  
  cin>>t;
  for(;t > 0; t--)
  {
    cin>>a>>b;
    
    if(b == 0)
      cout<<1<<endl;
    else
    {
      a %= 10;
      pos = (b - 1) % 4;
      if(a == 0 || a == 1 || a == 5 || a == 6)
	cout<<a<<endl;
      else if(a == 4)
	cout<<((b & 1) ? 4 : 6)<<endl;
      else if(a == 9)
	cout<<((b & 1) ? 9 : 1)<<endl;
      else if(a == 2)
	cout<<(a2[pos])<<endl;
      else if(a == 3)
	cout<<(a3[pos])<<endl;
      else if(a == 7)
	cout<<(a7[pos])<<endl;
      else if(a == 8)
	cout<<(a8[pos])<<endl;
    }
  }
  
  return 0;
}

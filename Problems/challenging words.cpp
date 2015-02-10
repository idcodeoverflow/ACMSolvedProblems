#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int iW = 0, b = 0, v = 0, bI = 0, s = 0, a = 0, i = 0, p[200];
	char w[1000];
    while(cin>>w)
	{
		iW++;
		s = strlen(w);
		v = 0;
    	for(i = 0; i < s; i++) 
		{
			a = (int) w[i]; 
			if(a < 123 && a > 96)
				v += a - 97;
		}

		if(v > b)
		{
			b = v;
			p[0] = iW;
			bI = 1;
		}
		else if(b == v)
			p[bI++] = iW;
	}
	cout<<b<<endl;
	for(i = 0; i < bI; i++)
		cout<<p[i]<<endl;
	return 0;
}

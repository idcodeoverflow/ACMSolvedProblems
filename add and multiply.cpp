#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
	ll a = 0, b = 0, c = 0, v[5] = {0}, min = 2199999999, max = -299999999;
	short t = 0, i = 0;
	cin>>t;
	
	while(t--)
	{
		cin>>a>>b>>c;
		v[0] = (a + b) * c;
		v[1] = (a + c) * b;
		v[2] = (b + c) * a;
		v[3] = a * c + b;
		v[4] = a * b + c;
		v[5] = b * c + a;
		for(i = 0; i < 6; i++)
		{
			if(v[i] > max)
				max = v[i];
			if(min > v[i])
				min = v[i];
		}
		cout<<min<<" "<<max<<endl;
		min = 2199999999;
		max = -299999999;
	}
	return 0;
}

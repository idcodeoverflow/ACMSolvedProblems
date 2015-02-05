#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double a = 0.0, sum = 0.0, i = 0.0, sq = 0.0, j = 0.0, b = 0.0, c = 0.0;
	
	while(cin>>a)
	{
		if( a < 0 )
			a *= -1;
		sum = 0.0;
		for(i = 1.0; i < a; i++)
		{
			j = i + 1.0;
			b = pow (i,2.0);
			c = pow(j,2.0);
			b = 1.0 + (1.0 /b) + (1.0 / c);
			sum += sqrt(b);
		}
		cout<<setiosflags(ios::fixed)<<setprecision(16)<<sum<<endl;	
	}
	
	return 0;
}

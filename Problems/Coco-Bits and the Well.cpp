#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double pi = 2.0 * acos(0), side = 0.0, h = 0;
	int t = 0;
	cin>>t;
	while(t--)
	{
		cin>>side;
		h = side / 2.0;
		cout<<setprecision(2)<<setiosflags(ios::fixed)<<side * side - h * h * pi<<endl;
	}
	return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

const double PI = acos(-1.0);
const double e = exp(1.0);

int main()
{
	int t = 0, n = 0;
	
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		if(n != 1)
			n = static_cast<int>(0.5*log10(2*PI*n)+n*log10(n/e)+1);
		else
			n = 1;
		cout<<n<<endl;
	}
	
	return 0;
}

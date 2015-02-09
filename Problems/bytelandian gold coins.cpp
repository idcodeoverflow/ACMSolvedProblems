#include <iostream>
#include <map>
#define MAX(a,b) (a < b) ? b : a

using namespace std;

map<int, long long> h;

inline long long coin(int n)
{
	if(n <= 8)
		return n;
	long long r = h[n];
	if(!r)
	{
	
		r = MAX(n,coin(n >> 1) + coin(n / 3) + coin(n >> 2));
		h[n] = r;
	}
	return r;
}


int main()
{
	register long long n = 0, res = 0, i = 0;
	
	for(i = 0; i < 10; i++)
	{
		cin>>n;
		if(n < 0)
			n *= -1;
		res = coin(n);
		if(n < res)
			cout<<res<<endl;
		else
			cout<<n<<endl;
	}

	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
inline int log2(int n)
{
	return static_cast<int>(log(n) / log(2));
}
inline int count(int n)
{
	int i = 0;
	for(i = 0; n > 0; i++)
		n -= 2 << log2(n);
	return i;
}
int main()
{
	int t = 0, n = 0, sum = 0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		sum += count(n);
	}
		cout<<sum;
	return 0;
}

#include <iostream>
using namespace std;
inline bool is_prime(short n)
{
	short primes[] = {2,3,5,7}, i = 0;
	for(i = 0; i < 4; i++)
		if(n % primes[i] == 0 && n != primes[i])
			return false;
	return true;
}
int main()
{
	int n = 0, k = 0, i = 0, z = 0, max = 0, win = 0, count = 0;
	short j = 0;
	bool tie = false;
	cin>>n>>k;
	for(z = 1; z <= n; z++)
	{
		count = 0;
		for(i = 0; i < k; i++)
		{
			cin>>j;
			if(is_prime(j))
				count++;
		}
		if(count > max)
		{
			max = count;
			win = z;
			tie = false;
		}
		else if(count == max)
			tie = true;
	}
	if(tie)
		cout<<"No winner"<<endl;
	else
		cout<<"Object "<<win<<" wins with "<<max<<" rare characteristics"<<endl;
	return 0;
}

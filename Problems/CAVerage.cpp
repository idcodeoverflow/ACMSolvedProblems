#include <iostream>
#include <cstring>

using namespace std;

int main()
{

	int t = 0, n = 0, i = 0, count = 0, math[6000], fis[6000];
	double mean = 0.0;
	
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		mean = 0;
		count = 0;
			
		for(i = 0; i < n; i++)
			cin>>math[i];
		
		for(i = 0; i < n; i++)
			cin>>fis[i];
			
		for(i = 0; i < n; i++)
			mean += math[i] + fis[i];

		mean = (double) (mean / n);

		for(i = 0; i < n; i++)
			if((math[i] + fis[i]) < mean)
				count++;
		cout<<count<<endl;
	}
	
	return 0;
}

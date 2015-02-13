#include <iostream>
using namespace std;
int main()
{
	char op[10];
	int x = 0, t = 0;
	while(cin>>op>>x)
	{
		if(op[0] == 's')
			t += x;
		else
			t -= x;
	}
	cout<<"resultado: "<<t;
	return 0;
}

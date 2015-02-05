#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;
inline void changeUP(char *v)
{
	int j = 0;
	for(j = 0; v[j] != (char)00; j++)
		if(v[j] == '5');
			v[j] = '6';
}
inline void changeDOWN(char *v)
{
	int j = 0;
	for(j = 0; v[j] != (char)00; j++)
		if(v[j] == '6');
			v[j] = '5';
}
int main()
{
	char x[10], y[10];
	int i = 0, a = 0, b = 0, max = 0, min = 0;
	cin>>x>>y;
	changeUP(x);
	changeUP(y);
	cout<<x<<"  "<<y<<endl;
	sscanf(x,"%d",&a);
	sscanf(y,"%d",&b);
	max = a + b;
	changeDOWN(x);
	changeDOWN(y);
	sscanf(x,"%d",&a);
	sscanf(y,"%d",&b);
	min = a + b;
	cout<<min<<" "<<max;
	return 0;
}

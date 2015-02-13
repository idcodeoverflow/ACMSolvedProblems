#include <iostream>
#include <algorithm>
using namespace std;
struct md{
	int i;
	int g;
	int s;
	int b;
}v[9];
inline bool comp(md a, md b)
{
	if(a.g == b.g)
	{
		if(a.s == b.s)
			return a.b > b.b;
		return a.s > b.s;
	}
	return a.g > b.g;
}
int main()
{
	int i = 0;
	while(i < 7)
	{
		cin>>v[i].g>>v[i].s>>v[i].b;
		v[i].i = i++;
	}
	sort(v, v + 7, comp);
	for(i = 0; i < 7; i++)
		cout<<"Facultad "<<v[i].i + 1<<" "<<v[i].g<<" "<<v[i].s<<" "<<v[i].b<<endl;
	return 0;
}

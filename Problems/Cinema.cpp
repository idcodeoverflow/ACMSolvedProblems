#include <iostream>
int main()
{
	int n = 0, i = 0, x = 0;
	double a = 0.0;
	char v[51];
	std::cin>>n>>v;
	for(; i < n; i++)
		if(v[i] != 'S')
			a += 0.5;
	x = n + 1 - (int)a;
	if(x > n)
		x = n;
	std::cout<<x;
	return 0;
}

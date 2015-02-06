#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	short a = 0, b = 0, c = 0, d = 0, p = 0, m = 0, g = 0, s1 = 0, s2 = 0, active = 0;
	
	cin>>a>>b>>c>>d;
	cin>>p>>m>>g;
	
	s1 = a + b;
	s2 = c + d;
	
	if((p % s1) <= a && p % s1)
	{
		active = 1;
	}
	
	if((p % s2) <= c && p % s2)
	{	
		active++;
	}
	
	if(active == 1)
		printf("one\n");
	else if(active == 2)
		printf("both\n");
	else
		printf("none\n");
		
	active = 0;
		
	if((m % s1) <= a && m % s1)
	{
		active = 1;
	}
	
	if((m % s2) <= c && m % s2)
	{
		active++;
	}
	
	if(active == 1)
		printf("one\n");
	else if(active == 2)
		printf("both\n");
	else
		printf("none\n");
		
	
	active = 0;
	if((g % s1) <= a && g % s1)
	{
		active = 1;
	}
	
	if((g % s2) <= c && g % s2)
	{
		active++;
	}
	
	if(active == 1)
		printf("one\n");
	else if(active == 2)
		printf("both\n");
	else
		printf("none\n");
	
	return 0;
}

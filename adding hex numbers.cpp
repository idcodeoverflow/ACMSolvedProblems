#include <stdio.h>
#include <string.h>
char a[300], b[300];
int n = 0;
inline short value(char a)
{
	return a - ((a <= '9') ? '0' : 55);
}
inline int carry(int s1, int s2)
{
	int n = 0, count = 0, carry = 0;
	s1--;
	s2--;
	while(s1 >= 0 || s2 >= 0)
	{
		n = ((s1 > -1) ? value(a[s1]) : 0) + ((s2 > -1) ? value(b[s2]) : 0) + carry;
		if(n > 15)
		{
			count++;
			carry = 1;
		}
		else
			carry = 0;
		if(s1 >= 0)
			s1--;
		if(s2 >= 0)
			s2--;
	}
	return count;
}
int main()
{
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s %s",a,b);
		printf("%d\n",carry(strlen(a),strlen(b)));
	}
	return 0;
}

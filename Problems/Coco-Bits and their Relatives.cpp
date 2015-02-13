#include <stdio.h>
#include <math.h>
#define N (char)00
char s[1000005];
int count = 0;
inline void cb()
{
	count = 0;
	for(int i = 0; s[i] != N; i++)
		if(s[i] == '1')
			count++;
}
inline int convert()
{
	int index = (int)ceil(log(count) / log(2.0) + 0.000001), c = 0;
	s[index--] = N;
	while(count)
	{
		if(count & 1)
		{
			s[index--] = '1';
			c++;
		}
		else
			s[index--] = '0';
		count >>= 1;
	}
	return c;
}
int main()
{
	scanf("%s", s);
	cb();
	printf("%s\n", s);
	if(count < 2)
		return 0;
		
	while(count != 1)
	{
		count = convert();
		printf("%s\n", s);
	}
	return 0;
}

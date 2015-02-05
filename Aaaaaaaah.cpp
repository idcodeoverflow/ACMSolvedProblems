#include <stdio.h>
int r = 0;
char c[1000000];
int main()
{
	scanf("%d",&r);
	r <<= 2;
	r += 2;
	c[0] = 'A';
	c[r] = (char)00;
	c[--r] = 'h';
	while(r-- > 1)
		c[r] = 'a';
	printf("%s",c);
	return 0;
}

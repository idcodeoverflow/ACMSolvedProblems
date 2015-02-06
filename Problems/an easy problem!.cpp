#include <stdio.h>

inline int to_decimal(char n)
{
	if(n >= 'a' && n <= 'z')
		return n - 61;
	if(n >= 'A' && n <= 'Z')
		return n - 55;
	if(n >= '0' && n <= '9')
		return n - '0';
	return 0;
}

inline char get_max(char *v)
{
	int i = 0;
	char max = 0;
	for(; v[i] != (char)00; i++)
		if(v[i] > max)
			max = v[i];
	return max;
}

inline int get_base(char n)
{
	if(n == '1' || n == '0')
		return 2;
	return to_decimal(n) + 1;
}

inline int sum_decimal(char *v)
{
	int i = 0, s = 0;
	for( ;v[i] != (char)00; i++) s += to_decimal( v[i] );
	return s;
}

int main()
{
	char n[10000];
	int base = 0, sum = 0;
	
	while(scanf("%s", &n) != EOF)
	{
		base = get_base( get_max(n) );
		sum = sum_decimal(n);
		if( base )
			while(sum % (base - 1) != 0 && base < 63) base++;
		
		if(base <= 62 && base >= 2)
			printf("%d\n", base);
		else
			printf("such number is impossible!\n");
		
		
	}	
    return 0;
}

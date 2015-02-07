#include <stdio.h>

int main()
{
	short v[100], sum = 0, i = 0;
	char s[20];
	
	v['A'] = 3;
	v['B'] = 3;
	v['C'] = 3;
	v['D'] = 4;
	v['E'] = 4;
	v['F'] = 4;
	v['G'] = 5;
	v['H'] = 5;
	v['I'] = 5;
	v['J'] = 6;
	v['K'] = 6;
	v['L'] = 6;
	v['M'] = 7;
	v['N'] = 7;
	v['O'] = 7;
	v['P'] = 8;
	v['Q'] = 8;
	v['R'] = 8;
	v['S'] = 8;
	v['T'] = 9;
	v['U'] = 9;
	v['V'] = 9;
	v['W'] = 10;
	v['X'] = 10;
	v['Y'] = 10;
	v['Z'] = 10;
	
	scanf("%s", s);
	for(i = 0; s[i] != (char)00; i++)
		sum += v[s[i]];
	printf("%d",sum);
	
	return 0;
}

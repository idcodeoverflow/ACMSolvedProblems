#include <stdio.h>
#include <string.h>

inline short is_letter(char a)
{
	return (a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z');
}

inline void plusl(char *v)
{
	for(int i = 0; v[i] != (char)00; i++)
		if(is_letter(v[i]))
			v[i] = ((is_letter(v[i] - 1)) ? v[i] - 1 : ((v[i] <= 'Z') ? 'Z' : 'z'));
}

void split(char *v, int ini, int fin)
{
	int i = ini, center = ini + (int)((fin - ini) / 2);
	char c;
	if(ini != center)
	{
		c = v[ini];
		for(; i <= center; i++)
			v[i] = v[i + 1];
		v[center] = c;
		split(v, ini, center - 1);
		split(v, center + 1, fin);
	}
}

char s[20003];

int main()
{
	while(gets(s))
	{
		plusl(s);
		split(s, 0, strlen(s) - 1);
		printf("%s\n",s);;
	}
	return 0;
}

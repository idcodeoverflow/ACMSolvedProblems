#include <stdio.h>
#include <string.h>

using namespace std;

inline int find(char *alien, char * spec)
{
	short i = 0, j = 0, c = 0;
	bool cond = true;
	for(i = 0; alien[i] != (char)00; i++)
	{
		for(j = 0; spec[j] != (char)00; j++)
			if(alien[i + j] != spec[j] || alien[i + j] == (char) 00)
			{
				cond = false;
				break;
			}
		if(cond)
			c++;
		cond = true;
	}
	return c;
}

int main()
{
	short t = 0, i = 0, n = 0, count = 0;
	char alien[1010], spec[1010];

	scanf("%hd", &t);
	
	for(i = 1; i <= t; i++)
	{
		scanf("%s %hd", &alien, &n);
		printf("Case %hd\n", i);
		while(n--)
		{
			scanf("%s", &spec);
			count = find(alien, spec);
			if(count)
				printf("%hd\n", count);
			else
				printf("Darwin was right about this creature\n");
		}
	}
	
	return 0;
}

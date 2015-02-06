#include <stdio.h>
#include <string.h>

int main()
{
	short max = 0, i = 0, actual, t = 0, n = 0, j = 0, v[30000];
	
	scanf("%hd", &t);
	
	while(t--)
	{
		memset(v,0,sizeof(v));
		scanf("%hd", &n);
		for(j = 0; j < n; j++)
			scanf("%hd", &v[j]);
		max = 0;
		i = 0;
		actual = 0;
		while(i < n)
		{
			while(v[i] < v[i + 1] && i < n)
				i++;
			for(actual = 0; i < n; i++)
				if(actual & 1)
					actual += ((v[i] < v[i - 1]) ? 1 : 0);
				else if(v[i] > v[i + 1])
					actual++;
				else break;
			if(actual > max)
				max = actual;
		}
		printf("%hd\n", max);
	}
	
	return 0;
}

#include <stdio.h>
#define MIN(A,B) ((A < B) ? (A) : (B))
int main()
{
	int s[50003], t[50003], c[50003], a = 0, b = 0, i = 0, n = 0, q = 0, min = 9999999, max = 0, temp = 0, t2 = 0, j = 0;
	scanf("%d%d",&n,&q);
	for(i = 1; i <= n; i++)
	{
		scanf("%d",&temp);
		c[i] = temp;
		if(min > temp)
			min = temp;
		if(max < temp)
			max = temp;
		s[i] = min;
		t[i] = max;
	}
	for(i = 0; i < q; i++)
	{
		scanf("%d %d",&a,&b);
		if(t[a] == t[b])
			if(t[a] == c[a])
				temp = t[a];
			else
			{
				temp = 0;
				for(j = a; j <= b; j++)
					if(temp < c[j])
						temp = c[j];
			}
		else
			temp = t[b];
		
		if(s[a] == s[b])
			if(s[a] == c[a])
				t2 = s[a];
			else
			{
				t2 = 9999999;
				for(j = a; j <= b; j++)
					if(t2 > c[j])
						t2 = c[j];
			}
		else
			t2 = s[b];
		
		printf("%d\n", temp - t2);
	}
	return 0;
}

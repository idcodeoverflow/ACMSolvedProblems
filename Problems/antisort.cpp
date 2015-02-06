#include <stdio.h>
#include <stdlib.h>

using namespace std;

inline int comp(const void *a, const void *b)
{
	return *(int *) a - *(int *) b;
}

int main()
{
	int t = 0, n = 0, i = 0, v[1010];
	
	scanf("%d", &t);
	
	while(t--)
	{
		scanf("%d",&n);
		printf("%d\n",n);
		for(i = 0; i < n; i++)
		{
			scanf("%d",v[i]);
			printf("%d%s", v[i],((i < n - 1) ? " " : ""));
		}
		printf()
		
		
		
	}

	return 0;
}
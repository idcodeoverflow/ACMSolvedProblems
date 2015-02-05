#include <stdio.h>
#include <stdlib.h>
inline int comp(const void *a, const void *b)
{
	return *(int *) a - *(int *) b;
}
inline int pos(int *v, int size)
{
	for(int i = 1; i < size; i++)
		if(abs(v[i] - v[i - 1]) > 200)
			return 0;
	if(2 * (1422 - v[size - 1]) > 200)
		return false;
	return 1;
}
int main()
{
	int n = 0, v[1430], i = 0;
	scanf("%d", &n);
	while(n)
	{
		for(i = 0; i < n; i++)
			scanf("%d", &v[i]);
		qsort(v, n, sizeof(int), comp);
		printf("%s\n", ((pos(v, n)) ? "POSSIBLE" : "IMPOSSIBLE"));
		scanf("%d", &n);
	}
	return 0;
}

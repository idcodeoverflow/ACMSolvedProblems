#include <stdio.h>
#include <string.h>
int n = 0, i = 0, count = 0;
char v[2510][17], m[17];
int main()
{
	scanf("%d",&n);
	for(i = 0; i < n; i++)
		scanf("%s",v[i]);
		
	for(i = 0; i < n; i++)
	{
		scanf("%s",m);
		if(strcmp(m,v[i]) == 0)
			count++;
	}	
	printf("%d/%d\n",count,n);
	return 0;
}

#include <stdio.h>
int n = 0, id = 0, a = 0, m = 0, d = 0, count[13], i = 0;
char date[20];
int main()
{
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %s", &id, date);
		for(i = 0; date[i] != (char)00; i++)
			if(date[i] == '/')
				date[i] = ' ';
		sscanf(date,"%d %d %d", &d, &m, &a);
		count[m]++;
	}
	for(i = 1; i <= 12; i++)
		printf("%d %d\n",i,count[m]);
	
	return 0;
}

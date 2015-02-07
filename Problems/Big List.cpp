#include <stdio.h>
#include <string.h>
struct ques{
	char v[20];
	int ans;
} l[10005];
int n = 0, m = 0, i = 0, r = 0, s = 0;
char q[20];
inline int is_in(char* a)
{
	for(int j = 0; j < n; j++)
		if(strcmp(l[j].v, a) == 0)
		{
			printf(">>>>>%s %s\n",a,l[j].v);
			return l[j].ans;
		}
	return -1;
}
int main()
{
	scanf("%d %d",&n,&m);
	for(i = 0; i < n; i++)
	{
		scanf("%s %d", &q, &r);
		strcpy(l[i].v, q);
		l[i].ans = r;
	}
	
	for(i = 0; i < m; i++)
	{
		r = -2;
		scanf("%s %d", &q, &r);
		s = is_in(q);
		printf("-->%s %d ->%d\n",q,r,s);
		if(s > 0)
		{
			if(s == r)
			{
				printf("ok\n");
			}
			else
			{
				printf("wrong\n");
			}
		}
		else
			printf("not found\n");
	}
	
	return 0;
}

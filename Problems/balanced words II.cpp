#include <stdio.h>
#include <string.h>

inline bool isBalanced(char *w)
{
	short i = 0, up = 0, low = 0, up2 = 0, low2 = 0, size = strlen(w), s2 = 0, x = 0;
	s2 = size / 2;
	for(i = 0; i < s2; i++)
	{
		if(w[i] >= 'a' && w[i] <= 'z')
			low++;
		else if(w[i] >= 'A' && w[i] <= 'Z')
			up++;
	}
	for(i = 1; i <= s2; i++)
	{
		x = size - i;
		if(w[x] >= 'a' && w[x] <= 'z')
			low2++;
		else if(w[x] >= 'A' && w[x] <= 'Z')
			up2++;
	}
	if(up == up2 && low == low2)
		return true;
	return false;
}

int main()
{
	char w[104];
	short t = 0;
	scanf("%hd", &t);
	while(t--)
	{
		scanf("%s", &w);
		printf("%s\n",((isBalanced(w)) ? "SI" : "NO"));
	}
	return 0;
}


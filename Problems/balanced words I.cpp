#include <stdio.h>

inline bool isBalanced(char *w)
{
	short i = 0, bal = 0;
	while(w[i] != (char)00)
	
		if(w[i++] >= 'a')
			bal++;
		else
			bal--;
	return bal;
}

int main()
{
	char w[104];
	short t = 0;
	scanf("%hd", &t);
	while(t--)
	{
		scanf("%s", &w);
		printf("%s\n",((isBalanced(w)) ? "NO" : "SI"));
	}
	return 0;
}

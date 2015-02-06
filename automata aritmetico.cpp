#include <stdio.h>

int signSP = 0, varSP;
char control = 'z';

struct sign{
	char sign;
	int position;
} sStack[100];

struct variables{
	char name;
	int val;
	int position;
} vStack[100];

inline void putSignsInStack(char *equation, register int size)
{
			register int index = 0;
			while(index++ < size)
			{
					switch(equation[index])
					{
						case '+':
						case '-':
						case '*':
						case '/':
						case '(':
						case ')':
							sStack[signSP++].sign = equation[index];
					}
			}
}

inline void putVariablesInStack(char *equation, register int size)
{
			register int index = 0;
			while(index++ < size)
			{
					if(equation[index] <= 'z' && equation[index] >= 'a')
						vStack[varSP++].name = equation[index];
					if(equation[index] >= '0' && equation[index] >= '9')
					{
						vStack[varSP].name = control--;
						vStack[varSP++].val = (int)equation[index] - 48;
					}
			}
}


inline bool checkErrors()
{
	if(signSP > 100)
	{
		printf("Error sign stack overflow\n");
		return true;
	}
	
	return false;
}

int main()
{
	char equation[200];

	return 0;
}

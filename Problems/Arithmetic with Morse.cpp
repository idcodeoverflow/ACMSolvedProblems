#include <iostream>
using namespace std;
int numbers[100], tn[100], n = 0,  i = 0, temp = 0, index = 0, index2 = 0, j = 0;
char op[100], tope[100], s[100], val[300];
int main()
{
	val['.'] = 1;
	val[':'] = 2;
	val['-'] = 5;
	val['='] = 10;
	cin>>n;
	cin.getline(s,100);
	for(i = 0; s[i] != (char)00; i++)
		if(s[i] != '+' && s[i] != '*' && s[i] != ' ')
		{
			temp += val[s[i]];
		}
		else if(s[i] != ' ')
		{
			numbers[index++] = temp;
			op[index2++] = s[i];
			temp = 0;
		}
	
	numbers[index++] = temp;
	
	for(i = 0; i < n; i++)
		if(op[i] == '*')
		{
			temp = numbers[i] * numbers[i + 1];
			numbers[i] = temp;
			for(j = i + 1; j < n; j++)
				numbers[j] =  numbers[j + 1];
			for(j = i; j < n - 1; j++)
				op[j] = op[j + 1];
			n--;
			i = 0;
		}
	temp = 0;
	for(i = 0; i <= n; i++)
		temp += numbers[i];
	cout<<temp;
	
	return 0;
}
/*
2
=.-..+...*:.
3
-*-+-*-
*/


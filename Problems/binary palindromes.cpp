#include <iostream>

using namespace std;

inline bool isBinaryPalindrome(register int n)
{
	int i = 0, index = 0, top = 0;
	char v[32];
	
	while(n > 0)
	{
		if(n & 1)
			v[index++] = '1';
		else
			v[index++] = '0';
		n >>= 1;
	}
	index--;
	top = index >> 1;
	for(i = 0; i <= top; i++)
		if(v[i] != v[index - i])
			return false;
	return true;
}

int main()
{	
	int n = 0, a = 0, b = 0, i = 0, sig = 0, palindromes[1500];
	bool space = false;

	for(i = 1; i <= 200000; i += 2)
		if( isBinaryPalindrome(i) )
			palindromes[sig++] = i;
			
	palindromes[sig] = 200009;
	
	cin>>n;
	
	for(; n > 0; n--)
	{
		cin>>a>>b;
		
		if(!(a & 1))
			a++;
		
		for(i = 0; palindromes[i] < a; i++);
			
		space = false;	
		
		for( ; palindromes[i] <= b; i++)
		{
			if(space)
				cout<<" ";
			cout<<palindromes[i];
			space = true;
		}
		cout<<endl;
		
	}
	
	
	return 0;
}

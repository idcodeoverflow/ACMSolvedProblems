#include <iostream>
using namespace std;
inline bool isUpper(char c)
{
	if(c >= 'A' && c <= 'Z')
		return true;
	return false;
}
inline bool isLower(char c)
{
	if(c >= 'a' && c <= 'z')
		return true;
	return false;
}

int main()
{
	char str[10005];
	int i = 0, val[255] = {0}, count = 0, j = 0;
	cin>>str;
	
	for(i = 0; str[i] != (char)00; i++)
	{
		j = i + 1;
		count = 0;
		if(str[j] == (char)00)
			break;
		while((isUpper(str[i]) && isLower(str[j])) || (str[i] > str[j] && (isLower(str[i]) && isLower(str[j]))) || (str[i] > str[j] && isUpper(str[i]) && isUpper(str[j])))
		{
			count++;
			if(str[j++] == (char)00)
				break;
			// cout<<(isUpper(str[i]) && isLower(str[j]))<<" "<<(str[i] > str[j] && (isLower(str[i]) && isLower(str[j])))<<(isUpper(str[i]) && isUpper(str[j]))<<endl;
			// cout<<str[i]<<"->"<<str[j]<<endl;
		}
		val[(int)str[i]] = count;
		// cout<<str[i]<<"-->> "<<val[i]<<endl;
	}
	
	j = 0;
	count = 0;
	for(i = (int)'Z'; i >= (int)'A'; i--)
	{	
		if(j < val[i])
		{
			j = val[i];
			count = i;
		}
		// cout<<val[i]<<" "<<(char)i<<endl;
	}
			
	for(i = (int)'z'; i >= (int)'a'; i--)
	{	
		if(j < val[i])
		{
			j = val[i];
			count = i;
		}
		// cout<<val[i]<<" "<<(char)i<<endl;
	}
	
	j = 0;
	if(count == 0)
	{
		for(i = 0; str[i] != (char)00; i++)
			if(isUpper(str[i]) && (int)str[i] > count)
				count = (int)str[i];
			else if(isLower(str[i]) && (int)str[i] > j)
				j = (int)str[i];
		
		if(count)
			cout<<(char)count;
		else
			cout<<(char)j;
	}
	else
		cout<<(char)count;
	
	return 0;
}

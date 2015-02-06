#include <iostream>
#include <cstring>
using namespace std;
char m[15][15];
int t = 0, n = 0, i = 0, j = 0;
inline bool is_real(int x, int y)
{
	if(x - 1 >= 0 && m[x - 1][y] == m[x][y])
		return false;
	if(x + 1 < n && m[x + 1][y] == m[x][y])
		return false;
	if(y - 1 >= 0 && m[x][y - 1] == m[x][y])
		return false;
	if(y + 1 < n && m[x][y + 1] == m[x][y])
		return false;
	return true;
}
inline bool is_perfect()
{
	int i = 0, j = 0;
	for(; i < n; i++)
		for(j = 0; j < n; j++)
			if(!is_real(i, j))
				return false;
	return true;
}
int main()
{	
	cin>>t;
	while(t--)
	{
		cin>>n;
		memset(m, ' ', 15 * sizeof(m[0]));
		for(i = 0; i < n; i++)
			cin>>m[i];
		cout<<((is_perfect()) ? "YES" : "NO")<<endl;
				
	}
	return 0;
}

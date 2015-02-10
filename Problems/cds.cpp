#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

inline bool comp(int a, int b)
{
	return a < b;
}

int main()
{
	int a = 0, b = 0, i = 0, vb = 0, count = 0, aux = 0;
	vector<int> va;
	
	scanf("%d %d", &a, &b);
	while(a || b)
	{
		for(i = 0; i < a; i++)
		{
			scanf("%d", &aux);
			va.push_back(aux);
			//c[va[i]] = 1;
		}
		for(; 0 < b; b--)
		{
			scanf("%d", &vb);
			if(binary_search(va.begin(), va.end(), vb, comp))
				count++;
		}
		
		printf("%d\n",count);
		count = 0;
		va.clear();
		scanf("%d %d", &a, &b);
	}
	
	return 0;
}

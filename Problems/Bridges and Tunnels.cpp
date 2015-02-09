#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <map>
using namespace std;
#include <cstring>
#define NODES 100000
int parent[NODES], sizes[NODES];
void make_set()
{
	for(int i = 0; i < NODES; i++)
	{
		parent[i] = i;
		sizes[i] = 1;
	}
}
int find(int n)
{
	if(n == parent[n])
		return n;
	return find(parent[n]);
}
void make_parent(int a, int b)
{
	if(a != b)
	{
		parent[b] = a;
		sizes[a] += sizes[b];
	}	
}
void unir(int a, int b)
{
	int pa = find(a), pb = find(b);
	make_parent(pa, pb);
}
map<string, int> h;
string a, b;
int index2 = 0, t = 0, n = 0;
char s[21], s1[21];
int main()
{
	scanf("%d", &t);
	while(t--)
	{
		make_set();
		scanf("%d", &n);
		index2 = 1;
		h.clear();
		while(n--)
		{
			scanf("%s %s", s, s1);
			a = s;
			b = s1;
			if(!h[a])
				h[a] = index2++;
			if(!h[b])
				h[b] = index2++;
			unir(h[a], h[b]);
			printf("%d\n",sizes[find(h[a])]);
		}
	}
	return 0;
}

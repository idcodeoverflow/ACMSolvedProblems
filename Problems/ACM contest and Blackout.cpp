#include <iostream>
#include <algorithm>
#include <cstring>
#define CITIES 100000
using namespace std;
int aristas[CITIES], index2 = 0;
struct nodo{
	int a;
	int b;
	int cost;
} nodos[CITIES];
inline bool comp(nodo a, nodo b)
{
	return a.cost < b.cost;
}
inline int kruskal(nodo *v, int n, int m)
{
	int i = 0, cost = 0, p[n + 1], q[n + 1];
	sort(v, v + m, comp);
	memset(p, 0, sizeof(p));
	memset(q, 0, sizeof(q));
	p[v[0].a] = 1;
	p[v[0].b] = 1;
	cost = v[0].cost;
	aristas[index2++] = 0;
	
	for(i = 1; i < m; i++)
	{
		if((p[v[i].a] && !p[v[i].b]) || (p[v[i].b] && !p[v[i].a]))
		{
			p[v[i].a] = 1;
			p[v[i].b] = 1;
			cost += v[i].cost;
			aristas[index2++] = i;
			i = 0;
		}
	}
	return cost;
}
inline int kruskal2(nodo *v, int n, int m, int ex)
{
	int i = 0, cost = 0, p[n + 1], q[n + 1], ar = 0;
	memset(p, 0, sizeof(p));
	memset(q, 0, sizeof(q));
	if(0 != aristas[ex])
	{
		ar++;
		p[v[0].a] = 1;
		p[v[0].b] = 1;
		cost = v[0].cost;
	}
	else
	{
		ar++;
		p[v[1].a] = 1;
		p[v[1].b] = 1;
		cost = v[1].cost;
	}
	for(i = 0; i < m; i++)
	{
		if(((p[v[i].a] && !p[v[i].b]) || (p[v[i].b] && !p[v[i].a])) && i != aristas[ex])
		{
			p[v[i].a] = 1;
			p[v[i].b] = 1;
			cost += v[i].cost;
			i = 0;
			ar++;
		}
	}
	if(ar != n - 1)
		return 99999999;
	return cost;
}
int main()
{
	int t = 0, n = 0, m = 0, i = 0, min = 99999999, x = 0;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(i = 0; i < m; i++)
			cin>>nodos[i].a>>nodos[i].b>>nodos[i].cost;
		cout<<kruskal(nodos, n, m)<<" ";
		
		for(i = 0; i < index2; i++)
		{
			x = kruskal2(nodos, n, m, i);
			if(min > x)
				min = x;
		}
		cout<<min<<endl;
		min = 99999999;
		index2 = 0;
	}
	return 0;
}

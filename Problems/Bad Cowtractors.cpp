#include <algorithm>
#include <cstring>
#include <iostream>
#define CITIES 50000
using namespace std;
int aristas[CITIES], index2 = 0;
struct nodo{
	int a;
	int b;
	int cost;
} nodos[CITIES];
inline bool comp(nodo a, nodo b)
{
	return a.cost > b.cost;
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
	if(index2 != n - 1)
		return -1;
	return cost;
}
int main()
{
	int t = 0, n = 0, m = 0, i = 0, x = 0;
	cin>>n>>m;
	for(i = 0; i < m; i++)
		cin>>nodos[i].a>>nodos[i].b>>nodos[i].cost;
	cout<<kruskal(nodos, n, m);
	return 0;
}

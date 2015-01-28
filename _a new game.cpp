#include <iostream>
using namespace std;
inline int biankaGame(int *v)
{
	if(v[(int)'W'] == 3)
		return 2;
	if(v[(int)'B'] == 3)
		return 0;
	if(v[(int)'B'] == 2 || v[(int)'W'] == 2)
		return 1;
}
inline int williamGame(int *v)
{
	if(v[(int)'W'] == 3)
		return 2;
	if(v[(int)'B'] == 3)
		return 0;
	if(v[(int)'B'] == 2)
		return 0;
	if(v[(int)'W'] == 2)
		return 2;
}
inline int winner(int b, int w)
{
	if(b == 0)
	{
		if(w == 1)
			return 1;
		if(w == 2)
			return 0;
	}
	if(b == 1)
	{
		if(w == 0)
			return 0;
		if(w == 2)
			return 1;
	}
	if(b == 2)
	{
		if(w == 0)
			return 1;
		if(w == 1)
			return 0;
	}
}
int bianka[100] = {0}, william[100] = {0}, g[3], win = 0, i = 0;
int main()
{
	char b[5], w[5], v[][11] = {"Rock", "Paper", "Scissors"}, name[][15] = {"Bianka", "Williams"};
	cin>>b>>w;
	for(i = 0; i < 3; i++)
		bianka[(int)b[i]]++;
	for(i = 0; i < 3; i++)
		william[(int)w[i]]++;
	g[0] = biankaGame(bianka);
	g[1] = williamGame(william);
	win = winner(g[0], g[1]);
	cout<<((win == 1) ? "Williams" : "Bianka")<<" won with "<<((g[win] == 0) ? "Rock" : ((g[win] == 1) ? "Paper" : "Scissors"))<<endl;
	cout<<((win == 0) ? "Williams" : "Bianka")<<" lost with "<<((g[((win) ? 0 : 1)] == 0) ? "Rock" : ((g[((win) ? 0 : 1)] == 1) ? "Paper" : "Scissors"))<<endl;
	return 0;
}

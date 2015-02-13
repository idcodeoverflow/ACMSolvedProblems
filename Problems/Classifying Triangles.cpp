#include <stdio.h>
#include <algorithm>
using namespace std;
int v[4];
int main()
{
	scanf("%d %d %d", &v[0], &v[1], &v[2]);
	sort(v, v + 3);
	if(v[0] + v[1] + v[2] != 180)
		printf("Error");
	else if(v[0] == v[1] && v[1] == v[2])
		printf("Equilateral");
	else if(v[0] == v[1] || v[1] == v[2])
		printf("Isosceles");
	else
		printf("Scalene");
	return 0;
}

#include <stdio.h>


int main()
{
	int t = 0, ng = 0, nm = 0, i = 0, mecha, godzilla, bg = 0, bm = 0;
	
	scanf("%d", &t);
	if(t < 0)
		t *= -1;
	
	while(t--)
	{
		scanf("%d %d", &ng, &nm);
		
		bg = 0;
		bm = 0;
		
		for(i = 0; i < ng; i++)
		{
			scanf("%d", &godzilla);
			if(bg < godzilla)
				bg = godzilla;
		}
		for(i = 0; i < nm; i++)
		{
			scanf("%d", &mecha);
			if(bm < mecha)
				bm = mecha;
		}	
		
		if(nm || ng)
		{
			if(bg >= bm)
				printf("Godzilla\n");
			else
				printf("MechaGodzilla\n");
		}
		else
				printf("uncertain\n");
		
		
	}
	
	
	
	return 0;
}

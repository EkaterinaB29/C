#include <stdio.h>
#include <stdlib.h>

void ifPossible(int x, int y, int z )
{
	if( z < abs(x) + abs(y) || (z- abs(x) - abs(y))%2 )
	{
		printf( "NOT Possible\n");
	}
	else 
		{printf("POSSIBLE\n");

}
}


int main()
{
	int x, y ,z;

	printf("Enter start x and start y :\n");
	scanf("%d",&x);
	scanf("%d",&y);
	printf("Enter number of moves \n");
	scanf("%d",&z);

	
	ifPossible(x,y,z);

	return 0;
}
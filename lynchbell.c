#include <stdio.h>


void printConsecutive (int last, int first)
{
	printf("%d\n",first );
	for (int x= first; x <= last; x++)
	{
		/* code */
		printf(" +%d ",x);
	}
}

void findConsecutive(int N)
{
	for (int last = 1; last < N; last++)
	{
		for (int first= 0; first <last; first++)
		{
			if (2*N == (last-first)*(last+first+1))
			{
				/* code */
				printf("%d = ",N);
				printConsecutive(last, first+1);
				return;
			}
		}

	}
	printf("-1\n");
}
int main()
{
	int n;
	printf("N = ");
	scanf("%d",&n);
	findConsecutive(n);	
	return 0;
}
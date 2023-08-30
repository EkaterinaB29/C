#include<stdio.h>
#include <stdlib.h>

void finalPosition(char str[])
{
	int countUp=0,countDown=0,countRight=0,countLeft=0;

	for (int i = 0; str[i] !='\0'; i++)
	{
		if(str[i] =='U')
		{
			countUp++;
		}
		else if(str[i] =='D')
		{
			countDown++;
		}
		else if(str[i] == 'R')
		{
			countRight++;
		}
		else if(str[i] =='L')
		{
			countLeft++;
		}
		
	}
	printf("Final position is : (%d,%d)\n",(countRight-countLeft),(countUp-countDown));

}
int main()
{
	char str[40];
	printf("Enter the path :\n");
	scanf("%s",&str);
	finalPosition(str);
	return 0;
}
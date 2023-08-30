#include <stdio.h>
#include <stdlib.h>

void getSum(int dNum)
{
	

		int dDigit1= dNum % 10; //last digit 
		int dDigit2= ((dNum /1000) %100) /10 ; //second last 
		int dDigit3 =(dNum /100) %10 ;//third from the back
		int dDigit4 = dNum /1000;
		int dSum1 = dDigit1 + dDigit2 ;
		 int dSum2= dDigit3 +dDigit4;
		if (dSum1< dSum2)
		{
			printf("bazinga!\n");
		}
		else if (dSum1== 69 || dSum2 == 69 )
		{
			printf("nice\n");
		}
		else if((dDigit1==6 || dDigit4==6 || dDigit2==6 || dDigit3==6 )&&(dDigit1==9 || dDigit4==9 || dDigit2==9|| dDigit3==9))
		{
			printf("nicer\n");
		}
		else 	
		{
			printf("boring\n");
		}

}

int main()
{
	int dNum;
	scanf("%d",&dNum);
	if (dNum >=1000 || dNum <10000)
	{
		getSum(dNum);
	}

	return 0;
}
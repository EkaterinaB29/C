#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


bool checkNumber69(int x)
{
	 //declare a string where the number will be saved when converted 
	//allocate size for 5 character becease of the \0 
	char str[5];
	//function to convert the int to string
	sprintf(str,"%d",x);
	return (strstr(str,"69"))!=NULL; //return true if the num has 69 in it 

}
bool checkNumber(int x)
{
	char str1[5];
	sprintf(str1,"%d",x);
	return (strstr(str1,"6")!=NULL && strstr(str1,"9")!=NULL);
}
int main()
{
	int dInput ;
	printf("Enter the number\n");
	scanf("%d",&dInput);

	if(dInput >=10 || dInput<=1000)
	{
		if(checkNumber69(dInput) && checkNumber(dInput))
		{
			printf("nice,nicer");
		}
		else if (checkNumber69(dInput))
		{
			printf("nicer\n");
		}
		else if (checkNumber(dInput))
		{
			printf("nice\n");

		}
		else
		{
			printf("boring\n");
		}
	}
	else
	{
		printf("Number rejected");
	}
	return 0;
}
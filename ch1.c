#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool checkNumber24(int x)
{
	char str[5]; //declaring a space for 4-digit number plus Null terminator 
	sprintf(str,"%d",x); //converting the number into a string 
	return strstr(str,"24") !=NULL;

}
bool checkNumber23(int x)
{
	char str[5];
	sprintf(str,"%d",x);
	return strstr(str,"23")!= NULL;
}

int main()
{
	//declare variables 
	int dInput;

	//ask the user for the number 
	printf("Enter the number:\n");
	scanf("%d",&dInput);

	if (dInput >=10 || dInput <=1000)
	{
		//check the number for 23  and 24 
		 if (checkNumber23(dInput))
		 {
		 	printf("Jordan\n");
		 }
		 else if( checkNumber24(dInput))
		 {
		 	printf("Kobe\n");
		 }
		 else 
		 {
		 	printf("useless\n");
		 }
	}
	else 
	{
		printf("You entered one-digit number \n"); //reject one-digit int 
	}

	return 0;
}
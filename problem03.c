#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Program to find if a number is Apocaliptic and then to print all Apocaliptic numbers 
in a certain range from 0 - 1000*/

/*Idea : calculate 2to pow N and check if the number contains the string "666"*/


/* function that returns true or false flag */
bool isApocaliptic(int x)
{

	bool flag = false;
    long long int num = pow(2,x) ; //calculate the number , save it in long 

	 char *str; //pointer to the string 
	 str = (char*)malloc(50*sizeof(char)); //alocate memory for the string +1 

	 //convert the number into the string 
	 //why it doesnt want to check correclt yhe num 
	 sprintf(str, "%lld" ,  abs (num));
	 printf("%s\n",str );
	  char search[]= "666";
	  char *ptr = strstr(str,search);
	 //using standard libabry function to check for substring 
	 if (ptr != NULL)
	 {
	 	flag = true;
	 }
	
	free(str);

	return flag;
}
int main()
{
	int n;
	scanf("%d",&n);

	if (isApocaliptic(n) == true )
	 {
	 	printf("YES\n");
	 }
	 else {
	 printf("NO\n");
	}
		
	return 0;
}
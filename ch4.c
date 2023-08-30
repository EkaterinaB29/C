#include <stdio.h>
#include<stdlib.h>

//enter the array 
void enterArray(int dSize, int *dArray)
{
	//declare the array
	
	for (int i = 0; i < dSize; i++)
	{
		scanf("%d",&dArray[i]);
	}
}


//print the arrray 
void printArray(int dSize, int *dArray)
{

	for (int i = 0; i < dSize; i++)
	{
		printf("%d",dArray[i]);
	}
}

//sort the array 
void sortArray(int dSize,int *dArray)
{
	int temp;
	for (int i = 0; i <dSize-1; ++i)
	{
		for (int j =i+1 ; j < dSize; j++)
		{
			if (dArray[i] < dArray[j])
			{
				temp=dArray[i];
				dArray[i]=dArray[j];
				dArray[j]=temp;
			}
			
		}
	}
}


int main()
{
	int dSize;

	printf("Wnter the size of the Array:\n");
	scanf("%d",&dSize);
	int *dArray = (int*)malloc(dSize *sizeof(int));

	printf("Enter the elements:\n");
	enterArray(dSize,dArray);

	printf("Original array:\n");
	printArray(dSize,dArray);

	printf("Sorted array:\n");
	sortArray(dSize ,dArray);
	printArray(dSize,dArray);
	free(dArray);
	return 0;
}
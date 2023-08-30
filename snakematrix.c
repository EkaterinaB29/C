#include<stdio.h>
#include <stdlib.h>

void printSnake( int **matrix, int rows ,int cols )
{

 for(int i =0; i< rows ; i++){
 	if(i %2 ==0 ){
 	
 	for (int j = 0; j < cols;j++)
 		{
 			printf("%d ",matrix[i][j] );
 		}	
 		
 	}
 	else 
 	{
 		for(int j=cols-1 ; j>=0;j--)
 		{
 			printf("%d ",matrix[i][j]);
 		}
 	}
}
}


int main()
{
	int rows,cols;

	scanf("%d",&rows);
	scanf("%d",&cols);

	//allocate some space for the matrix 
	int **matrix= (int**)malloc(rows*sizeof(int*));
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = (int*)malloc(cols*sizeof(int));
	}
	//SCAN THE MATRIX 
	for (int i = 0; i < rows; i++)
	{
		for (int j= 0; j< cols;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}

	printSnake(matrix, rows, cols );



	return 0;
}

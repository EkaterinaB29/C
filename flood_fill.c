#include <stdio.h>
#include <stdlib.h>

void floodFill(int **matrix,int rows , int cols,int startX, int startY,int targetColor,int replacementColor)
{
	//stop condition
	if(startX <0 || startX>= rows || startY < 0 || startY>= cols || matrix[startX][startY] != targetColor) 
	{
		return;
	}
	//actual replacement 
	matrix[startX][startY]=replacementColor;

//recursive calls 
	floodFill(matrix,rows,cols,startX+1,startY,targetColor,replacementColor);
	floodFill(matrix,rows,cols, startX, startY+1 ,targetColor,replacementColor);
	floodFill(matrix, rows,cols, startX-1,startY,targetColor,replacementColor);
	floodFill(matrix,rows,cols,startX,startY-1,targetColor,replacementColor);

}

//function to print the matrix 
void printMatrix(int **matrix , int rows, int cols )
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j< cols; j++)
		{
			printf("%d\n", matrix[i][j]);
		}
	printf("\n");
	}
}
int main()
{
	//declaring some variables 
	int rows, cols,startX, startY; 
	int target, rep;

	printf("ENTER THE SIZE OF THE MATRIX:\n");
	scanf("%d",&rows);
	scanf("%d",&cols);

	
	//allocate memory for the ROWS
	int **matrix = (int **)malloc(rows*sizeof(int*));
	//ALLOCATE MEMPRY FOR THE COLUMNS 
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = (int *)malloc(cols * sizeof(int));
	}
	//input the matrix 
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}




	printf("Enter the startX\n");
	scanf("%d",&startX);

	printf("Enter the startY\n");
	scanf("%d",&startY);

	//printing the original entered matrix 
	printf("Original matrix:\n");
	printMatrix(matrix,rows,cols);
	//enter the targetColor 
	printf("ENTER TARGET COLOR:\n");
	scanf("%d",&target);

	//enter the replacement 
	printf("ENTER REPLACEMENT:\n");
	scanf("%d",&rep);


	floodFill(matrix,rows,cols,startX,startY,target,rep);

	//printing the modified matrix 
	printf("Modified matrix:\n");
	printMatrix(matrix,rows,cols);

	//free the allocated memory 
	for (int i = 0; i < rows; i++)
	{
		free(matrix[i]);
	}
	free(matrix);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>
void printMatrix(int **matrix, int rows, int cols,int x,int y)
{
	if(x<0 || x>= rows || y<0 || y>=cols )
	{
		return;
	}
	//print first row 
	for (int p=y ; p<cols ; p++)
	{
		printf("%d ",matrix[x][p] );
	}
	//print last column 
	for (int p=x+1; p<rows ; p++)
	{
		printf("%d ",matrix[p][cols-1] );
	}
	if(x<rows-1 && y<cols-1 )
	{
		for (int p=cols-2; p >=y; p--)
		{
			printf("%d ",matrix[rows-1][p] );
		}
	}

	if(y<cols-1&& x<rows-1)
	{
		for (int p = rows-2; p>x; p--)
		{
			printf("%d ",matrix[p][y] );
		}
	}
	printMatrix(matrix,rows-1,cols-1,x+1,y+1);
    
	

}

int main()
{
	int rows,cols;
	scanf("%d",&rows);
	scanf("%d",&cols);

	//Allocate memory for the matrix 
	int **matrix=(int**)malloc(rows*sizeof(int*));
	for (int i = 0; i < rows; i++)
	{
		matrix[i]=(int*)malloc(cols*sizeof(int));
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	int x =0,y=0;
	printMatrix(matrix,rows,cols,x,y);
	 // Free the allocated memory
    for (int i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
	
	return 0;
}
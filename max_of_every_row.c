#include <stdio.h>
#include <stdlib.h>


void FindMax( int **matrix,int dStartX,int dStartY, int rows,int cols,int  *dMax )
{
	//stopping condition = base case
	if(dStartX<0 || dStartX>= rows || dStartY<0 || dStartY>= cols)
	{
		return;
	}
	if(*dMax < matrix[dStartX][dStartY])
	{
		*dMax= matrix[dStartX][dStartY];
	}

FindMax(matrix,dStartX,dStartY+1,rows,cols,dMax);

}

int main()
{
	//initilize the variables 
	int rows ,cols; 
	printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
	//allocate space for the matrix 
	int **matrix = (int**)malloc(rows*sizeof(int*));
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = (int*)malloc(cols*sizeof(int));
	}

	// Input matrix elements
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }


	//start with the top-left element of the matrix 
	//assume that max is just a temp to hold the max we find in every row 
	for (int i = 0; i < rows; i++)
	{
		int dMax=0 ;
		FindMax(matrix,i, 0,rows,cols, &dMax);
		printf("%d ", dMax);
	}

	//free the allocated space 
	for (int i = 0; i < rows; ++i)
	{
		free(matrix[i]);
	}
	free(matrix);
	
	return 0;
}
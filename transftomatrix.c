#include <stdio.h>
#include <stdlib.h>

int findTransformation(int **matrix1, int **matrix2, int n,int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix1[i][j]-= matrix2[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j= 0; j < m; j++)
		{
			if (matrix1[i][j] - matrix1[i][0]- matrix1[0][j]+ matrix1[0][0] != 0)
			{
				return -1;
			}
		
				int result =0;
				for (int i = 0; i < n; i++)
				{
					result += abs(matrix1[i][0]);
					for (int j = 0; j < m; j++)
					{
						result+= abs(matrix1[0][j]-matrix1[0][0]);

					}
				}
				return abs(result);
			
		}
	}
}


void enterMatrix ( int **matrix, int cols, int rows){
	//enter matrix1 
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			scanf("%d",&matrix[i][j]);
		
		}
	}
}
int main()
{
	int rows,cols;
	scanf("%d",&rows);
	scanf("%d",&cols);

	//alocate space for MAT 1 
	int **matrix1 = (int**)malloc(rows*sizeof(int*));
	for (int i = 0; i < rows; i++)
	{
		matrix1[i]=(int*)malloc(cols*sizeof(int));
	}


	//alocate space for matrix2 
	int **matrix2 = (int**)malloc(rows*sizeof(int*));
	for (int i = 0; i < rows; i++)
	{
		matrix2[i]=(int*)malloc(cols*sizeof(int));
	}

	// Enter values for matrix1
    printf("Enter values for matrix1:\n");
    enterMatrix(matrix1, rows, cols);

    // Enter values for matrix2
    printf("Enter values for matrix2:\n");
    enterMatrix(matrix2, rows, cols);

	printf("Number of transformations required:%d\n",findTransformation( matrix1 , matrix2, rows,cols));

    // Free memory for matrix1
    for (int i = 0; i < rows; i++) {
        free(matrix1[i]);
    }
    free(matrix1);

    // Free memory for matrix2
    for (int i = 0; i < rows; i++) {
        free(matrix2[i]);
    }
    free(matrix2);
	
	return 0;
}
#include <stdio.h>
#include  <math.h>
#include <stdlib.h>
#define ROWS 3 
#define COLS 3 

void findPath (int matrix[ROWS][COLS],int x, int y , int dPro,int counter , int *maxFlag)
{

	if(x >= ROWS || y>= COLS)
	{
		return;
	}
	if ( x == ROWS -1 && y== COLS -1 )
	{
		 
		dPro*= (abs (matrix[x][y]));
	 // return the sum
        printf("%d\n",dPro);
         // RAISE THE FLAG to stop searching for a path  

        if (dPro > *maxFlag)
        {
        	*maxFlag = dPro ;; // update if we have found bigger max 
        }
        return;
	}
	dPro*= (abs (matrix[x][y]));
    findPath(matrix, x, y + 1, dPro, counter+ 1, maxFlag);//Move right
    findPath(matrix, x + 1, y, dPro, counter + 1,maxFlag);//Move  down
}
void enterPath(int matrix[ROWS][COLS]){
    int dPro =1 ;
    int flag=0;
    int counter =0;
    int maxFlag=0; // Initilise it to 0 
    findPath(matrix, 0, 0, dPro,counter,&maxFlag);
    printf(" Maximum absolute sum from all paths is : %d\n",maxFlag);
    
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, -2, 1},
        {1, -2, 1},
        {3, -4, 1},   
    };

    enterPath(matrix);

    return 0;
}
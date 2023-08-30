#include <stdio.h>

#define ROWS 4
#define COLS 4

//if you want the function to stop FTER FINDING ONE VALID PATH 
//introduce a flag 
void findPath(int matrix[ROWS][COLS], int x, int y, char path[], int pathLength , int *foundPath) {
	if(*foundPath)
	{
		return; //stop exploring if a path has been found 
	}
    if (x >= ROWS || y >= COLS || matrix[x][y] == 2) {
        return;
    }
    
    if (x == ROWS - 1 && y == COLS - 1) {
        path[pathLength] = '\0';  // Null-terminate the path string
        printf("%s\n", path);
        *foundPath=1; // RAISE THE FLAG 
        return;
    }

    path[pathLength] = 'R';
    findPath(matrix, x, y + 1, path, pathLength + 1, foundPath);
    
    path[pathLength] = 'D';
    findPath(matrix, x + 1, y, path, pathLength + 1,foundPath);
}

void robotPath(int matrix[ROWS][COLS]) {
    char path[ROWS + COLS - 1];  // Maximum path length is ROWS + COLS - 1
    int pathLength = 0;  // Initialize path length
    printf("ALL POSSIBLE PATHS ARE:\n");
    int foundPath=0;
    findPath(matrix, 0, 0, path, pathLength ,&foundPath);
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 2, 2, 1},
        {1, 2, 1, 1}
    };

    robotPath(matrix);

    return 0;
}

#include <stdio.h>

void printGrid(int grid[][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
}

int checkVisibility(int arr[], int height, int visibleCount) {
    int count = 0;
    int maxHeight = 0;
    for (int i = 0; i < 4; i++) {
        if (arr[i] > maxHeight) {
            maxHeight = arr[i];
            count++;
        }
    }
    return (count == visibleCount && maxHeight == height);
}

int checkConstraints(int grid[][4], int up[], int down[], int left[], int right[]) {
    int colUp[4], colDown[4], rowLeft[4], rowRight[4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            colUp[j] = grid[j][i];
            colDown[j] = grid[3 - j][i];
            rowLeft[j] = grid[i][j];
            rowRight[j] = grid[i][3 - j];
        }
        if (!checkVisibility(colUp, up[i], up[4 + i]) || !checkVisibility(colDown, down[i], down[4 + i]) ||
            !checkVisibility(rowLeft, left[i], left[4 + i]) || !checkVisibility(rowRight, right[i], right[4 + i])) {
            return 0;
        }
    }

    return 1;
}

int solveSkycrapers(int grid[][4], int up[], int down[], int left[], int right[], int row, int col) {
    if (row == 4 && col == 0) {
        if (checkConstraints(grid, up, down, left, right)) {
            return 1;
        }
        return 0;
    }

    if (col == 4) {
        return solveSkycrapers(grid, up, down, left, right, row + 1, 0);
    }

    for (int i = 1; i <= 4; i++) {
        grid[row][col] = i;
        if (solveSkycrapers(grid, up, down, left, right, row, col + 1)) {
            return 1;
        }
    }

    return 0;
}

int main() {
    int grid[4][4] = {0};
    int up[] = {2, 1, 3, 2};
    int down[] = {2, 3, 1, 2};
    int left[] = {2, 2, 1, 3};
    int right[] = {3, 2, 2, 1};

    if (solveSkycrapers(grid, up, down, left, right, 0, 0)) {
        printf("Solution found:\n");
        printGrid(grid);
    } else {
        printf("No solution found.\n");
    }

    return 0;
}

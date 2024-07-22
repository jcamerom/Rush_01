#include "allheaders.h"
#include <unistd.h>
#include <stdlib.h>


int combinations[TOTAL_COMBINATIONS][SIZE * SIZE];
int count = 0;

bool is_safe(int **matrix, int row, int col, int num) {
    int x = 0;
    while (x < SIZE) {
        if (matrix[row][x] == num || matrix[x][col] == num) {
            return false;
        }
        x++;
    }
    return true;
}

void store_combination(int **matrix) {
    int idx;
    int i;
    int j;

    idx = 0;
    i = 0;
    while (i < SIZE) {
        j = 0;
        while (j < SIZE) {
            combinations[count][idx++] = matrix[i][j];
            j++;
        }
        i++;
    }
    count++;
}

void solve(int **matrix, int row, int col) {
    if (row == SIZE - 1 && col == SIZE) {
        store_combination(matrix);
        return;
    }
    if (col == SIZE) {
        row++;
        col = 0;
    }
    int num = 1;
    while (num <= SIZE) {
        if (is_safe(matrix, row, col, num)) {
            matrix[row][col] = num;
            solve(matrix, row, col + 1);
            matrix[row][col] = 0; // backtrack
        }
        num++;
    }
}

int (*get_combinations())[SIZE * SIZE] {
    int **matrix;
    int i;
    int j;
    
    matrix = (int **)malloc(SIZE * sizeof(int *));
    i = 0;
    while (i < SIZE) {
        matrix[i] = (int *)malloc(SIZE * sizeof(int));
        j = 0;
        while (j < SIZE) {
            matrix[i][j] = 0;
            j++;
        }
        i++;
    }
    solve(matrix, 0, 0);

    i = 0;
    while (i < SIZE) {
        free(matrix[i]);
        i++;
    }
    free(matrix);

    return (combinations);
}
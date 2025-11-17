
#include <stdio.h>
#define N 3

void generateMagicSquare(int magic[N][N]) {
    int row = 0, col = N / 2;
    for (int num = 1; num <= N * N; num++) {
        magic[row][col] = num;
        int nextRow = (row - 1 + N) % N;
        int nextCol = (col + 1) % N;
        if (magic[nextRow][nextCol] != 0) {
            row = (row + 1) % N;
        } else {
            row = nextRow;
            col = nextCol;
        }
    }
}

void printMagicSquare(int magic[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d", magic[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int magic[N][N] = {0};
    generateMagicSquare(magic);
    printMagicSquare(magic);
    return 0;
}
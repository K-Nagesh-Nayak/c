#include <stdio.h>
#include <math.h>

#define MAX_SIZE 20

int board[MAX_SIZE], count;

void printBoard(int n) {
    printf("\nSolution %d\n", ++count);
    for (int i = 1; i <= n; i++)
        printf("\t%d", i);
    
    for (int i = 1; i <= n; i++) {
        printf("\n\n%d", i);
        for (int j = 1; j <= n; j++)
            printf("\t%s", (board[i] == j) ? "Q" : "-");
    }
}

int place(int row, int col) {
    for (int i = 1; i < row; ++i)
        if (board[i] == col || abs(board[i] - col) == abs(i - row))
            return 0;
    return 1;
}

void solveNQueens(int row, int n) {
    for (int col = 1; col <= n; col++) {
        if (place(row, col)) {
            board[row] = col;
            if (row == n)
                printBoard(n);
            else
                solveNQueens(row + 1, n);
                
        }
    }
}

int main() {
    int boardSize;

    printf("- N queens problems using backtracking -\n");
    printf("Enter the number of queens: ");
    scanf("%d", &boardSize);

    solveNQueens(1, boardSize);

    return 0;
}

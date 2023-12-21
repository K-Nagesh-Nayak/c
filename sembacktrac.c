#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int board[20],count;

void print(int n){
    printf("\nSolution %d\n",++count);
    for(int i=1;i<=n;i++){
        printf("\t%d",i);
    }
    for(int i=1;i<=n;i++){
        printf("\n\n%d",i);
        for(int j=1;j<=n;j++)
            printf(board[i]==j? "\tQ" :"\t-");
        
    }
}

int place(int row,int col){
    for(int i=1;i<row;++i){
        if(board[i]==col || abs(board[i]-col) == abs(i-row))
        return 0;
    }
    return 1;
}
 void queen(int row,int n){
    int col;
    for(col=1;col<=n;col++){
        if(place(row,col)){
            board[row]=col;
            if(row==n){
                print(n);}
            else{
                queen(row+1,n);
            }
        }
    }
 }

int main() {
    printf("- N Queens Problem using Backtracking -");
    printf("\nEnter the number of queens: ");
    int n;
    scanf("%d", &n);

    count = 0;
    queen(1, n);


    return 0;
}



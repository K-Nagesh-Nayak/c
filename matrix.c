#include <stdio.h>


void strassenMultiply(int A[2][2],int B[2][2],int C[2][2] ){
  int m1=(A[0][0]+A[1][1])*(B[0][0]+B[1][1]);
  int m2=(A[1][0]+A[1][1])*B[0][0];
  int m3=A[0][0]*(B[0][1]-B[1][1]);
  int m4=A[1][1]*(B[1][0]-B[0][0]);
  int m5=(A[0][0]+A[0][1])*B[1][1];
  int m6=(A[1][0]-A[0][0])*(B[0][0]+B[0][1]);
  int m7=(A[1][0]-A[1][1])*(B[1][0]+B[1][1]);

  C[0][0]=m1+m4-m5+m7;
  C[0][1]=m3+m5;
  C[1][0]=m2+m4;
  C[1][1]=m1+m3-m2+m6;
}

int main() {
    int A[2][2], B[2][2], C[2][2];

    printf("Enter elements of the first 2x2 matrix A:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of the second 2x 2 matrix B:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &B[i][j]);

    strassenMultiply(A, B, C);

    printf("Resultant 2x2 matrix C:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}


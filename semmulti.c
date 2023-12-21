#include<stdio.h>

void strassen(int a[2][2],int b[2][2],int c[2][2]){
   int p=(a[0][0]+a[1][1])*(b[0][0]+b[1][1]);
   int q=b[0][0]*(a[1][0]+a[1][1]);
   int r=a[0][0]*(b[0][1]-b[1][1]);
   int s=a[1][1]*(b[1][0]-b[0][0]);
   int t=b[1][1]*(a[0][0]+a[0][1]);
   int u=(a[1][0]-a[0][0])*(b[0][0]+b[0][1]);
   int v=(a[0][1]-a[1][1])*(b[1][0]+b[1][1]);

   c[0][0]=p+s-t+v;
   c[0][1]=r+t;
   c[1][0]=q+s;
   c[1][1]=p-q+r+u;
}
int main(){
    int i,j,a[2][2],b[2][2],c[2][2];
     printf("Enter the elements a");
     for(i=0;i<2;i++){
        for(j=0;j<2;j++)
        scanf("%d",&a[i][j]);
     }
     printf("Enter the elements b");
     for(i=0;i<2;i++){
        for(j=0;j<2;j++)
        scanf("%d",&b[i][j]);
     }
     strassen(a,b,c);
     printf("result is\n");
      for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("%d\t",c[i][j]);
        }
        printf("\n");
     }
}
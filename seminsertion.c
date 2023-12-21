#include<stdio.h>

int insertion(int arr[],int n){
    int i,j;
    
    for(i=1;i<=n;i++){
        int min=arr[i];
       j=i-1;
       while(j>=0 && arr[j]>min){
        arr[j+1]=arr[j];
        j--;
       }
       arr[j+1]=min;
    }
}
int main(){
    int n;
    
    printf("Enter the number of elements");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    insertion(a,n);
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
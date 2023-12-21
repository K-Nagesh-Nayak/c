#include<stdio.h>
int swap(int *a,int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}


int selec(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(&arr[i],&arr[min]);
    }
}
int main(){
    int arr[]={10,9,8,6,10,9,81,182,1001,18,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    selec(arr,n);
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
  return 0;
}
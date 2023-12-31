#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void merge(int arr[],int low,int mid,int high){
    int c[100],i,j,k;
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            c[k]=arr[i];
            i++;
        }else{
            c[k]=arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        c[k]=arr[i];
        i++;k++;
    }
    while(j<=high){
        c[k]=arr[j];
        j++;k++;
    }
    for(j=low;j<=high;j++){
        arr[j]=c[j];
    }
}

void mergeSort(int arr[],int low,int high)
{if(low<high){
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
}
int main(){
    int n;
  printf("Enter the number of elements (more than 5000):\n");
    scanf("%d", &n);
  int arr[n];
 
   for(int i=0;i<n;i++){
     arr[i]=rand()%100;
     
   }

    clock_t start=clock();
    mergeSort(arr,0,n-1);
    clock_t end=clock();
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    double timetaken=((double)(end-start))/(double)CLOCKS_PER_SEC;
    printf(" time taken is %lf",timetaken);
} 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int swap(int *a,int *b){
    int temp = *a;
    *a =*b;
    *b = temp;
}




void quicksort(int arr[],int first,int last){
  int i,j,pivot;
  if(first<last){
    i=first;
    pivot=first;
    j=last;
    while(i<j){while (arr[i]<arr[pivot] && i<last)
    {
     i++;
    }
    while(arr[j]>arr[pivot]){
      j--;
    }
    if(i<j){
      swap(&arr[i],&arr[j]);
    }}
    swap(&arr[pivot],&arr[j]);
    quicksort(arr,first,j-1);
    quicksort(arr,j+1,last);
  }
}


int main(){
    int n;
  printf("Enter the number of elements (more than 5000):\n");
    scanf("%d", &n);
  int arr[n];
   for(int i=0;i<=n;i++){
     arr[i]=rand()*1000+i;
     
   }
   for(int i=0;i<=n;i++){
    printf("%d\n",arr[i]);
     
   }
   printf("%%%%%%%%%%%%%%%%%%%%%%%%\n");
   clock_t start=clock();
  quicksort(arr,0,n-1);
  clock_t end=clock();
  for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
  }
  double timetaken = ((double)(end-start))/(double)CLOCKS_PER_SEC;
  printf("Timetaken %lf",&timetaken);
}
#include<stdio.h>
void findminmax(int arr[],int low,int high,int *min,int *max){
    int mid,min2,min1,max1,max2;
    if(high==low){
        *min=arr[low];
        *max=arr[low];
        return;
    }
    if(high==low+1){
        if(arr[low]<arr[high]){
            *min=arr[low];
        *max=arr[high];
        }else{
           *min=arr[high];
        *max=arr[low]; 
        }
        return;
    }
    mid=(low+high)/2;
    findminmax(arr,low,mid,&min1,&max1);
    findminmax(arr,mid+1,high,&min2,&max2);

    *min=(min1<min2)?min1:min2;
    *max=(max1>max2)?max1:max2;
}
int main(){
    int arr[]={11,9,62,190};
    int n=sizeof(arr)/sizeof(arr[0]);
    int min,max;
    findminmax(arr,0,n-1,&min,&max);
    printf("%d\t%d",min,max);
}
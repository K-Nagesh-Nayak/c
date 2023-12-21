#include <stdio.h>

void findSubset(int set[],int n,int targetSum,int currentSubset[],int currentSize,int currentIndex){
    if(targetSum==0){
        printf("Subset found :{ ");
        for(int i=0;i<currentSize;i++){
            printf("%d%s",currentSubset[i],i<currentSize -1 ? "," : "}\n");
        }}
        for(int i=currentIndex;i<n;i++){
            if(set[i]<=targetSum){
                currentSubset[currentSize]=set[i];
                findSubset(set,n,targetSum-set[i],currentSubset,currentSize+1,i+1);
            }
        }
    }


int main()
{
   int set[]={1,2,3,4,5,6};
   int n=sizeof(set)/sizeof(set[0]);
   int targetSum=9;
   int currentSubset[n];
   printf("Target sum is %d\n:",targetSum);
   
   printf("Original set :{ ");
   for(int i=0;i<n;i++){
    printf("%d",set[i]);
    if(i<n-1){
        printf(",");
    }

   }
   printf("}\n");
   findSubset(set,n,targetSum,currentSubset,0,0);
   if(currentSubset[0]==0){
    printf("no solution");
   }
   return 0;

}


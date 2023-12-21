#include<stdio.h>
#include<stdlib.h>

#define MAX 100
 int visited[MAX];

 void dfs(int graph[MAX][MAX],int vertex,int currentvertex){
    printf("Visited vertex %d\n",currentvertex);
    visited[currentvertex]=1;

    for(int i=0;i<vertex;i++){
        if(graph[currentvertex][i]==1 && !visited[i]){
            dfs(graph,vertex,i);
        }
    }
 }
int main(){
    int vertex=6,v;
    int graph[MAX][MAX]={
        {0, 0, 0, 0, 1, 1},
        {0, 0, 0, 1, 0, 1},
        {0, 0, 0, 0, 0, 1},
        {0, 1, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 1},
        {1, 1, 1, 1, 1, 0},
    };
    printf("starting ");
    scanf("%d",&v);
    dfs(graph,vertex,v);
    return 0;
}
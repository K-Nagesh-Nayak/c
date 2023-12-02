#include<stdio.h>
int i,n,j,visited[10],queue[10],front=-1,rear=-1;
int adj[10][10];

void bfs(int v){
    for(i=1;i<=n;i++)
        if(adj[v][i] && !visited[i])
            queue[++rear]=i;
        
    
    if(front<=rear){
        visited[queue[front]]=1;
        bfs(queue[front++]);
    }
}

int main() {
    int v;

    printf("Enter the number of vertex");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        visited[i]=0;
        queue[i]=0;
    }


printf("Enter the  graph in matrix form");
   for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        scanf("%d",&adj[i][j]);
    }
   }

 printf("Enter the starting vertex");
 scanf("%d",&v);

 bfs(v);

 printf("Reached vertex");
 for(i=1;i<n;i++){
    if(visited[i]){
        printf("%d\n",i);
    }
 }

  if(front>rear){
    printf("not possible");
  }
 return 0;
}




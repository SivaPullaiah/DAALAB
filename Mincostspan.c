#include<stdio.h>
void readv();
void primsalg();
int n,cost[10][10],ne=1,u,v,a,b,i,j,min,visited[10],mincost=0;
void readv() {
    int i, j;
    printf("Enter the number of nodes or vertices: ");
    scanf("%d", &n);
    printf("\nEnter the cost adjacency matrix of the given graph: ");
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0) {
                cost[i][j]=9;
            }
            }
        }
    }
void primsalg() {
    visited[1]=1;
    while(ne<n) {
        for(i=1,min=999;i<=n;i++){
            for(j=1;j<=n;j++) {
                if(cost[i][j]<min) {
                    if(visited[i]!=0) {
                        min=cost[i][j];
                        a=u=i;
                        b=v=j;
                    }
                }
            }
        }
    if (visited[u]==0 || visited[v]==0)  {
        printf("\nEdge %d:(%d,%d)cost: %d\n",ne++,a,b,min);
        mincost+=min;
        visited[b]=1;
    }
    cost[a][b]=cost[b][a]=9;
    }
    printf("\nmincost of the spanning tree given is:%d",mincost);
}
void main() {
    readv();
    primsalg();
}

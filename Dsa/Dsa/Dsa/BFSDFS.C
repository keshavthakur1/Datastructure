#include<stdio.h>
#include<queue.h>

void BFS (int g[][7],int start ,int n){
    int i=start ;
    struct =Queue  q;
    int visited [7]={0};

    printf ("%d",i);
    visited[i]=1;
    enqueue(i);
    while(!isEmpty())
    {
        i=enqueue();
        for(j=1;j<n;j++)
        {
            if( G[i][j]=1 && visited[j]==0)
            {}
        }
    }
}

int main(){
 {
    int G[7][7]={{0,0,0,0,0,0,0},
 {0,0,1,1,0,0,0},
 {0,1,0,0,1,0,0},
 {0,1,0,0,1,0,0},
 {0,0,1,1,0,1,1},
 {0,0,0,0,1,0,0},
 {0,0,0,0,1,0,0}};

 return 0;

 }
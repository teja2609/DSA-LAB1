#include<iostream>
#include<stdio.h>
using namespace std;
#define INFINITY 9999
#define max 5
void dijkstra(int G[max][max],int n,int startnode);

void dijkstra(int G[max][max],int v,int S) {
   int cost[v][v],distance[v],pred[v];
   int visited[v],count,mindistance,nextnode,i,j;
   for(i=0;i<v;i++)
      for(j=0;j<v;j++)
   if(G[i][j]==0)
      cost[i][j]=INFINITY;
   else
      cost[i][j]=G[i][j];
   for(i=0;i<v;i++) 
   {
      distance[i]=cost[S][i];
      pred[i]=S;
      visited[i]=0;
   }
   distance[S]=0;
   visited[S]=1;
   count=1;
   while(count<v-1)
    {
      mindistance=INFINITY;
      for(i=0;i<v;i++)
         if(distance[i]<mindistance&&!visited[i]) 
         {
             mindistance=distance[i];
             nextnode=i;
         }
      visited[nextnode]=1;
      for(i=0;i<v;i++)
         if(!visited[i])
      if(mindistance+cost[nextnode][i]<distance[i]) 
      {
         distance[i]=mindistance+cost[nextnode][i];
         pred[i]=nextnode;
      }
      count++;
   }
   for(i=0;i<v;i++)
   if(i!=S) {
      cout<<"\nDistance of node"<<i<<"="<<distance[i];
      cout<<"\nPath="<<i;
      j=i;
      do {
         j=pred[j];
         cout<<"<-"<<j;
      }while(j!=S);
   }
}
int main() 
{
   int n,v,e,U,V,W,S;
   cout<<"enter the number of vertices and edges"<<endl;
   cin >> v>>e;
   int G[max][max];
   for(int i=0;i<e;i++)
   {
      cout<<"enter the adjacent edeges and corresponding weights"<<endl;
      cin >> U>>V>>W;
      G[U][V]=W;
      G[V][U]=W;

   }
   cout <<"enter the source node"<<endl;
   cin >>S;

   dijkstra(G,v,S);
   return 0;
}

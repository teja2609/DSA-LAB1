#include<iostream>
#include<stdio.h>
using namespace std;
#define INFINITY 9999
#define max 10
void BellMan(int G[max][max],int vertices,int edges,int source);
void BellMan(int G[max][max],int ver,int edg,int src)
{
	int distance[ver],u,v,w;
	for(int i=0;i<ver;i++)
		distance[i]=INFINITY;
		distance[src] = 0;
	for(int i=0;i<ver;i++)
	{
		for(int j=0;j<edg;j++)
		{
			if(G[i][j] !=0)
			{
				u=i;
				v=j;
				w=G[i][j];
				if (distance[u] != INFINITY && (distance[u] + w < distance[v]))
         			distance[v] = distance[u] + w;
			}
			
		}
	}

	for(int i=0;i<ver;i++)
	{
		for(int j=0;j<edg;j++)
		{
			if(G[i][j] !=0)
			{
				u=i;
				v=j;
				w=G[i][j];
				if (distance[u] != INFINITY && (distance[u] + w < distance[v]))
				{
					cout<<"Graph is having negative cycle"<<endl;
         			return;
				}
         			
			}
			
		}
	}

printf("Vertex :\t\t ");
   for (int i = 0; i < ver; ++i)
      printf("%d \t", i);
      printf("\nDistance From Source : ");
   for (int i = 0; i < ver; ++i)
      printf("%d \t",distance[i]);
   return;



}
int main() 
{
   int n,v,e,U,V,W,S;
   cout<<"enter the number of vertices and edges"<<endl;
   cin >> v>>e;
   int G[max][max];
   for(int i=0;i<e;i++)
   {
      cout<<"enter the adjacent edeges and corresponding weights of directed graph"<<endl;
      cin >> U>>V>>W;
      G[U][V]=W;
   }
   cout <<"enter the source node"<<endl;
   cin >>S;
   BellMan(G,v,e,S);
   return(0);
  }
#include<iostream>
#include<stdio.h>
using namespace std;
#define INFINITY 9999
#define max 10
void Floyd_War(int G[max][max],int ver);
void Floyd_War(int G[max][max],int ver)
{
	for(int k=0;k<ver;k++)
	{
		for(int i=0;i<ver;i++)
		{
			for(int j=0;j<ver;j++)
			{
				if(G[i][j]<(G[i][k]+G[k][j]))
				{
					G[i][j] = G[i][j];
				}
				else
				{
					G[i][j] = G[i][k]+G[k][j];
				}
			}
		}
	}

	for(int i=0;i<ver;i++)
	{
		cout<<"shortest path from"<<" "<<i<<"->"<<endl;
		for(int j=0;j<ver;j++)
		{
			cout<<"to"<<" "<<j << " is"<<G[i][j]<<endl;
		}
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
      cout<<"enter the adjacent edeges and corresponding weights of directed graph"<<endl;
      cin >> U>>V>>W;
      G[U][V]=W;
   }
   for(int i=0;i<v;i++)
   {
   	for(int j=0;j<v;j++)
   	{
   		
   		if(G[i][j]==0)
   		{
   			G[i][j]=INFINITY;
   		}

   	}
   }
   	Floyd_War(G,v);
   	return(0);
   }

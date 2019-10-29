#include<iostream>
#include<math.h>
using namespace std;
int vertArr[20][20],q[20],visited[20],r=-1,f=0; //the adjacency matrix initially 0
int count = 0;
void displayMatrix(int v)
{
   int i, j;
   for(i = 0; i < v; i++)
    {
      for(j = 0; j < v; j++)
      {
         cout << vertArr[i][j] << " ";
      }
      cout << endl;
   }
}
void BFS(int node,int ver)
{
	 		for(int i=0;i<ver;i++)
	 		{
                if(vertArr[node][i] && !visited[i])
                {
                    q[++r]=i;
                }
                if(f<=r)
                {
                 visited[q[f]]=1;
                 BFS(q[f++],ver);
             	}
             }
}
void add_edge(int u, int v) {       //function to add edge into the matrix
   vertArr[u][v] = 1;
   //vertArr[v][u] = 1;
}
int main() {
   int v, e,U,V,node;
   cout<<"enter the no vertices and edges"<<endl;
   cin >> v>>e;
   for(int i=0;i<e;i++)
   {
   	cout<<"enter the adjacent elements:: source node first"<<endl;
   	cin >> U>>V;
   	add_edge(U,V);
   }
   for(int j=0;j<v;j++)
   {
   		 q[j]=0;
         visited[j]=0;
   }
   cout<<"now printing the adjacency matrix"<<endl;
   displayMatrix(v);
   cout<<"enter the node of ur choice"<<endl;
   cin >> node;
   //BFS(node,v);
   cout << "All nodes reachable from" <<" " <<node<<"are ->"<<endl;
    for(int i=0;i<v;i++)
    {
             if(vertArr[node][i])
             {
                cout<<i<<" ";
              }
    }
    cout<<endl;
    cout << "implementing the breadth first algorithm on the node selected befor"<<endl;
    BFS(node,v);
    cout<<"All nodes from"<<" "<<node<<" are -->"<<endl;
    for(int i=0;i<v;i++)
    { 
             if(visited[i])
             { 
                cout<<i<<" ";  
             }
     } 

}

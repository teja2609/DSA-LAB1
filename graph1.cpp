#include <iostream>
#include <vector>
using namespace std;

vector <int> adj[10];
void display(int v)
{
    auto x;
	for (int j= 0; j < v; ++j) 
    { 
        cout << "\n Adjacency list of vertex ";
        cout << j << "\n head "<<" "; 
        for (auto x : adj[j])
          { 
           cout << "-> " << x;
          } 
        cout<<" "<<endl; 
    } 


}

int main()
{

	int v, e,U,V;
   cout<<"enter the no vertices and edges"<<endl;
   cin >> v>>e;
   for(int i=0;i<e;i++)
   {
   	cout<<"enter the adjacent elements:: source node first"<<endl;
   	cin >> U>>V;
   	adj[U].push_back(V);
   }
   display(v);
}

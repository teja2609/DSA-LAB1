#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main ()
{
int i,k,l,c,m,b,n;
cout<<"enter no. of vertices"<<endl;
cin>>l;
cout<<"enter no. of edges"<<endl;
cin>>m;
list<int> adjl[l];
int adj[l][l];
for(i=0;i<l;i++)
{
 for(k=0;k<l;k++)
  {
adj[i][k]=0;
}
}
cout<<"enter edges in adjacency matrix"<<endl;
for(i=0;i<m;i++)
{
cin>> c >> b;
adj[c][b]=1;
}
for(i=0;i<l;i++)
{
 for(k=0;k<l;k++)
  {
    cout<<adj[i][k]<<" ";
  }
 cout<<" "<<endl;
}
while(n!=l*l)
{
for(i=0;i<l;i++)
 {
  for(k=0;k<l;k++)
   {
    adjl[n]=adj[i][k];
   }
 }
}
for(int i = 0; i<l; i++) {
     cout << i << "--->";
     list<int> :: iterator it;
     for(it = adjl[i].begin(); it != adjl[i].end(); ++it) 
     {
        cout << *it << " ";
     }
     cout << endl;
   }
return 0;
}



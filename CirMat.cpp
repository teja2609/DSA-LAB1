#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
 int m,n,i,j,temp1,temp2; 
 cout<<"enter no. of rows and columns:"<<endl;
 cin>>m>>n;
 int array[m][n];
   i=0;
   for(j=0;j<n;j++)
    {
      cout<<"enter the element"<<endl;
      cin>>array[i][j];
     }
cout<<"given matrix elements"<<endl;
       cout<<"[";
 for( j=0;j<n;j++)
      {
        cout<<array[i][j]<<" ";
      }
        cout<<"]"<<endl;
cout<<"Circulant matrix : "<<endl;

for(i=1;i<m;i++)
 {
  for(j=0;j<n;j++)
   { 
     if(j==0)
     {
    temp1=array[i-1][n-1];
     array[i][j]=temp1;
      }
     else
      {
     temp2=array[i-1][j-1];
     array[i][j]=temp2;
      }
    }
  }

 for( i=0;i<m;i++)
{
 cout<<"[";
 for( j=0;j<n;j++)
      {
        cout<<array[i][j]<<" ";
      }
cout<<"]"<<endl;
}
return 0;
}

      

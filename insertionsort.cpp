#include<iostream>
#include<string>
using namespace std;
class insertion_sort
{
    public:
    int insr( int *a,int m)
 {
    int i,j,key;
    
    for(i=0;i<m;i++)
    {
        key=a[i];
        j=i-1;
        while(a[j]>key && j>=0)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
            
    }
    return 0;
 }
};

int main()
{
    insertion_sort obj;
    int n,i;
    cout<<"enter the no. of elements\n";
    cin>>n;
    int a[n];
    cout<<"enter the elements to be sorted\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    obj.insr(a,n);
    cout<<"after sorting elements are\n";
    for(i=0;i<n;i++)
    {
       cout<<a[i]<<" \n";
    }
    return 0;
}

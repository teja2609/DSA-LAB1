#include<iostream>
#include<string>
using namespace std;
class employee {
    public:
      int emp_num;
      char emp_name;
      float basic,da,it,gsl,nsl;
      
       void getinfo();
       void getnetsal();
};

void employee::getinfo()
{
   
   cout<<"\n enter employee id"<<endl;
      cin>>emp_num;
      cout<<"\n enter employee name"<<endl;
      cin>>emp_name;
      cout<<"\n enter employee basic"<<endl;
      cin>>basic;
}
void employee::getnetsal()
{
      da=0.52*basic;
      gsl=basic+da;
      it=0.3*gsl;
     cout<<"net salary is"<< gsl-it<<endl;
}
int main() {
    employee obj;
    int i,n;
    cout<<"enter number of employees";
    cin>>n;
   for(i=0;i<=n;i++)
{
      obj.getinfo();
      obj.getnetsal();
      
}
return 0;
}   


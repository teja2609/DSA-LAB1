#include<iostream>
using namespace std;
class employee {
    public:
      int emp_num;
      char emp_name;
      float basic,da,it,gsl,nsl;

void getinfo()
{
   
   cout<<"enter employee id";
      cin>>emp_num;
      cout<<"enter employee name";
      cin>>emp_name;
      cout<<"enter employee basic";
      cin>>basic;
}
void getnetsal()
{
      da=0.52*basic;
      gsl=basic+da;
      it=0.3*gsl;
      nsl=gsl-it;
     cout<<"net salary is"<< nsl;
}
};
int main() {
    employee obj;
    int i,n;
    cout<<"enter number of employees";
    cin>>n;
   for(i=0;i<=n;i++){
      obj.getinfo();
      obj.getnetsal();
      
}
return 0;
}   


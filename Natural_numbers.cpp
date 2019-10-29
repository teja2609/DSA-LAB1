#include<iostream>
#include<string>
using namespace std;
class Natural_Numbers
{
   private:
   int a,b;
   public:
  ~Natural_Numbers()
  {
      cout << "The Destructor is called!!"<< endl;
  }
  Natural_Numbers(int val)
  {   
      cout <<"The Constructor is called!!" << endl;
      a = val;
      cout << "entered natural_number is:"<< val << endl;
  }
  void set_value(int x,int y)
  {
    a =x;
    b =y;
  }
  void get_number()
  {
      cout <<"The two entered numbers are:"<< a <<" "<<"and:"<< b << endl;
  }
  void add_number(int x, int y)
  {
      int c;
      c = x+y;
      cout << "sum is:"<<c<< endl;
  }
  void sub_number(int x, int y)
  {
      int d;
      d = x-y;
      cout <<"difference is:"<< d<< endl;
  }
  void check_number(int x)
  {
      if(x%2 == 0){
          cout << "entered number is even natural"<<endl;
          
      }
      else if(x%2 !=0)
      {
          cout << "entered number is odd natural"<<endl;
      }
      else if(x<0)
      {
          cout << "entered number is not natural"<<endl;
      }
      
  }
  
};
int main()
{
   
   
    int x,y;
    cout << "enter values of two natural numbers "<<endl;
    cin >> x >>y;
    //Natural_Numbers N(x);
    Natural_Numbers M(x);
   
    M.set_value(x,y);
    M.get_number();
    M.add_number(x,y);
    M.sub_number(x,y);
    M.check_number(y);
    M.check_number(x);
    
    
    
    
    return 0;
}

#include <iostream> 
#include<string>
using namespace std; 
  
class Vehicle { 
  public: 
    Vehicle() 
    { 
      cout << "This is a Vehicle\n" << endl; 
    } 
};
 
class bus: public Vehicle
       {
           //Single inheritance
       }; 
   
class Fourwheeler{
  public:
       Fourwheeler()
      {
       cout<<"fourwheeler is a vehicle\n"<<endl;
      }
};
     
class Car: public Vehicle, public Fourwheeler
{ 
          //Multiple inheritance
    public: 
        Car()
     {
       cout<<"this is a car with four wheels\n"<<endl;
      } 
};

class Mercedes: public Car 
{
          //Multilevel inheritance 
    public:
         Mercedes()
      {
        cout<<"class a merc benz is a car\n"<<endl;
      }
};


int main() 
{    

      bus obj1;
      Car obj2;
 Mercedes obj3; 
    return 0; 
} 

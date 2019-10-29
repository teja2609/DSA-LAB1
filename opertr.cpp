
#include <iostream>
using namespace std;
class C
{
	public:
	C(int i=0);
	void setV(int);
    C operator+( const C& ) const;
    C operator-(const C& ) const;
	void print() const;
    private:
       int x;
};
C ::C(int i)
{
    setV(i);
}
void C :: setV(int i)
{
    x=i;
}

void C::print() const
 {
	 cout<<"x :"<< x << endl;
	 }

C C::operator+( const C& c ) const
{
	C res;
	res.x=x+c.x;
return res;
}
C C::operator-( const C& d ) const
{
	C res;
	res.x=d.x;
        return res;
}
int main()
{
    int a,b;
   
   cout<<"enter two numbers"<<endl;
   cin>>a>>b;
   C g(a),h(b),j,l;
   j=g+h;
   j.print();
   l=g-h;
   l.print();
return 0;
}

//concept of constructor
//default sonstructor
///parametrized constructor
#include<iostream>
using namespace std;
class box
{
private:
      double length;
      double breadth;
      double height;
    
public:
    box()
    {
        cout<<"constuctor get called....!!!!"<<endl;
    }
    box(double l,double b,double h)//parametrized constructor
    {
        length=l;
        breadth=b;
        height=h;
    }
    double getvolume ();
    
};
double box::getvolume()
{
    return (length*breadth*height);
}
int main()
{
    box  b(10,5,2);//calling parametirisez constructor
    cout<<"\n volume :---->"<<b.getvolume()<<endl;
  
    return 0;
}
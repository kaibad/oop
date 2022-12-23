//printing the dimension of a box in a different method
#include<iostream>
using namespace std;
class box
{
    double length;
    double breadth;
    double height;
    public:
        void setlength(double l);
        void setbreadth(double b);
        void setheight(double h);

        double getlength();
        double getbreadth();
        double getheight();

};
void box::setlength(double l)
{
    length=l;
}
double box::getlength()
{
    return length;
}
void box::setbreadth(double b)
{
    breadth=b;
}
double box::getbreadth()
{
    return breadth;
}
void box::setheight(double h)
{
    height=h;
}
double box::getheight()
{
    return height;
}
int main()
{
    box b;

    b.setlength(10);
    b.setbreadth(5);
    b.setheight(2);
    
    cout<<"length:------>"<<b.getlength()<<endl<<"breadth:----->"<<b.getbreadth()<<endl<<"height:------>"<<b.getheight()<<endl;
    return 0;
}
//calculating the area and volume of a box
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
        double getvolume();
        double getarea();

};
double box::getvolume()
{
    return (length*breadth*height);
}
double box::getarea()
{
    return (2*((length*breadth)+(breadth*height)+length*height));
}


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

    cout<<"\narea:----->"<<b.getarea()<<endl;

    cout<<"\nVolume:----->"<<b.getvolume()<<endl;

    return 0;
}
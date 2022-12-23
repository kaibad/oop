//printing the dimensions  of the box
#include<iostream>
using namespace std;
class box
{
    double length;
    double breadth;
    double height;
    public:
    void setdimension(double l,double b,double h)
    {
        length=l;
        breadth=b;
        height=h;
    }
    void displaydimesnsion()
    {
        cout<<"length:------>"<<length<<endl<<"breadth:----->"<<breadth<<endl<<"height:------>"<<height<<endl;


    }
};
int main()
{
    box b;
    b.setdimension(10,5,2);
    b.displaydimesnsion();
    return 0;
}
//cpp program to find the area and volume of a box using class and object

#include<iostream>
using namespace std;
class box{
    public:
    double length;
    double breadth;
    double height;
    double getarea()
    {
        return(length*breadth*height);
    }
    double getvoulume()
    {

        return((length*breadth)+(breadth*height)+(length*height));
    }
    void setdimensions()
    {
        cout<<length<<endl;
        cout<<breadth<<endl;
        cout<<height<<endl;        
    }
};
int main()
{
    box ob;
    ob.length=10;
    ob.breadth=5;
    ob.height=2;
    cout<<"length="<<ob.length<<endl;
    cout<<"breadth="<<ob.breadth<<endl;
    cout<<"height="<<ob.height<<endl<<endl;
    cout<<"area="<<ob.getarea()<<endl;
    cout<<"volume ="<<ob.getvoulume()<<endl<<endl;
    cout<<"dimensions="<<endl;
    ob.setdimensions();


    return 0;
}
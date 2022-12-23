//cpp progyam to understand the concept of constructor
//copy constructor
#include<iostream>
using namespace std;
class rectangle{
    int length;
    int breadth;
    public:
         rectangle();//default constructor
         rectangle(int l,int b);//paramertizwd constructor
         int area();
         rectangle(const rectangle &obj)//copy constructor
         {
            length=obj.length;
            breadth=obj.breadth;
         }


};
int rectangle::area()
{
    return (length*breadth);
}
rectangle::rectangle()
{
    length=10;
    breadth=10;
}
rectangle::rectangle(int l,int b)
{
    length=l;
    breadth=b;

}
int main()
{
    rectangle ob1,ob2(2,10);
    cout<<"area=:----->"<<ob1.area()<<endl;
    cout<<"area:----->"<<ob2.area()<<endl;
    rectangle ob3=ob2;
    cout<<"area:----->"<<ob3.area()<<endl;

    return 0;
}

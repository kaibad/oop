//concept of constructor
//default sonstructor
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
    
};
int main()
{
    box  b;
  
    return 0;
}
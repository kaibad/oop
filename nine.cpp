//C++ Program to Find Largest Number Among Three Numbers
#include<iostream>
using namespace std;
int main()
{
    double n1,n2,n3;

   cout<<"enter three number:";
   cin>> n1>>n2>>n3;
    if(n1>=n2 && n1>=n3)
    cout<<"largest number is:"<< n1;

    else if(n2>=n1 && n2>=n3)
    cout<<"largest number is:"<< n2;

    else 
    cout<<"largest number is:"<< n3;

    return 0;
}

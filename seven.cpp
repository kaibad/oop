//C++ Program to Check Whether Number is Even or Odd
#include<iostream>
using namespace std;
 int main ()
 {
    int n;
    cout<<"emter the integer:";
    cin >> n;
     if (n % 2==0)
     cout<<n<<"is even.";
     else 
     cout << n << " is odd.";
     return 0;
 }
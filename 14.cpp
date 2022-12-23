//return by refrence 
#include <iostream>
using namespace std;


int num;// global variable


int& test_ref();// function declaration

int main() {

  
  test_ref() = 5;// assign 5 to num variable and equivalent to num = 5;
                        

  cout << "The entered number by the user is:---->"<<num<<endl;

  return 0;
}


int& test_ref()// function definition and returns the address of num variable

{
  return num;
}


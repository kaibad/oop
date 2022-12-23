// Factorial of n = 1*2*3*...*n
//using recursion
//A function that calls itself is known as a recursive function. And, this technique is known as recursion.

#include <iostream>
using namespace std;

int factorial(int);

int main() 
{
    int n, result;

    cout << "Enter a non-negative number:---->\t ";
    cin >> n;

    result = factorial(n);
    cout << "Factorial of " << n << "------>\t\t\t" << result;
    return 0;
}

int factorial(int n) 
{
    if (n > 1)
	{
        return n * factorial(n - 1);
    }
	else
	 { 
    
        return 1;
    }
}


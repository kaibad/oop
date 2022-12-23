//Inline function
// Inline function in C++ is an enhancement feature that improves the execution time and speed of the program.
//In case of inline functions, the compiler does not go through the above process of switching between the stack and calling function.
/*An inline function is one for which the compiler copies thecode from the function definition directly into the 
code of the calling function rather than creating a separate set of instructions in memory.*/
#include <iostream>
using namespace std;
inline int cube(int s)
{
	return s*s*s;
}
int main()
{ 
    int s;
	cout<<"what is the number:---->";
	cin>>s;
	
	cout << "The cube of " << s<<" is:----->"<<cube(s) << "\n";
	return 0;
} //Output: The cube of 3 is: 27


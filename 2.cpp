//swapping the number 
#include<iostream>
using namespace std;
void swap(int &p,int &q)
{int temp;
temp=p;
p=q;
q=temp;

}
int main()
{ int a=2, b=3;
cout<<"Before Swap------>";
cout<<"\ta="<<a<<"\tb="<<b<<endl<<endl;
swap(a,b);
cout<<"After Swap------->";
cout<<"\ta="<<a<<"\tb="<<b<<endl;
return 0;
}

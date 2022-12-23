//cpp program to find the area ,volume and dimensions of a box using class and objects
#include<iostream>
using namespace std;
class box{
	public:
		double length;
		double breadth;
		double height;
		double getarea()
		{
			return(2*(length*breadth)+2*(breadth*height)+2*(height*length));
			
		}
		double getvolume()
		
		{
			return(length*breadth*height);
			
		}
		void setdimensions()
		{
			cout<<length<<"*"<<breadth<<"*"<<height<<endl;
			
		}
};
int main()
{ 
    box ob;
    cout<<"Mention the length of the box----->\t";
    cin>>ob.length;
    cout<<"Mention the width of the box----->\t";
    cin>>ob.breadth;
    cout<<"Mention the height of the box----->\t";
    cin>>ob.height;
    cout<<endl<<"area---->\t"<<ob.getarea()<<endl<<endl;
    cout<<"volume-->\t"<<ob.getvolume()<<endl<<endl;
    
    cout<<"dimensions of the box is ---->\t";
    ob.setdimensions();
    

}



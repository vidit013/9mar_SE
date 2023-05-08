#include<iostream>
using namespace std;
class A
{
	private:
		int x,y;
		public:
		friend void setdata();
};
void setdata()
{
	A obj;
	obj.x=10;
	obj.y=20;
	cout<<"Before swapping"<<obj.x<<endl;
	cout<<"Before swapping"<<obj.y<<endl;
	
	A t=x;
	  x=y;
	  y=t;
	  cout<<"After swapping"<<obj.x<<endl;
	  cout<<"After swapping"<<obj.y<<endl;
}
main()
{
	setdata();
}

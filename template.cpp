#include<iostream>
using namespace std;
template <class T>
void swapping(T &a,T &b)
{
	T t=a;
	  a=b;
	  b=t;
}
main()
{
	char a='A',b='B';
	int x=10,y=20;
	cout<<"Before swap A:"<<a<< "| B:"<<b<<endl;
	swapping(a,b);
	cout<<"After swap A:"<<a<< "| B:"<<b<<endl;
	
	cout<<"Before swap X:"<<x<< "| Y:"<<y<<endl;
	swapping(x,y);
	cout<<"Before swap X:"<<x<< "| Y:"<<y<<endl;
}

#include<iostream>
using namespace std;
inline int multiplication(int a,int b)
{
	int result=a*b;
	return result;
}
main()
{
	int a=5;
	int b=6;
	cout<<"multiplication value = "<<multiplication(a,b);
}

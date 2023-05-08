#include<iostream>
using namespace std;
inline int cube(int x)
{
	int result=x*x*x;
	return result;
}
main()
{
	int x=2;
	cout<<"cube = "<<cube(x);
}

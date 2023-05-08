#include<iostream>
using namespace std;
class interest //declar class
{
	public:
	interest(int principal,int year,float rate) //parameterized constructor
	{
		cout<<"principal :- ";
		cin>>principal;
		cout<<"year :- ";
		cin>>year;
		cout<<"rate :- ";
		cin>>rate;
		cout<<"simple interest = "<<(principal*year*rate)/100;
	}
};
main()
{
	interest i1=interest(1000,5,2.5);
}

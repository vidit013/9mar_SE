#include<iostream>
using namespace std;
class Bankaccount //declar class
{
	char Nameofdepositor[20];
	int Accountnumber;
	char Accounttype[20];
	int Balanceammountintheaccount;
	public:
		void inputdata()
		{
			cout<<"Enter Name of depositor :- "<<endl;
			cin>>Nameofdepositor;
			cout<<"Enter Account number :- "<<endl;
			cin>>Accountnumber;
			cout<<"Enter Account type :- "<<endl;
			cin>>Accounttype;
			cout<<"Enter Balance ammount in the account :- "<<endl;
			cin>>Balanceammountintheaccount;

		}
		void displaydata()
		{
			cout<<"\nName of depositor :- "<<Nameofdepositor;
			cout<<"\nAccount number :- "<<Accountnumber;
			cout<<"\nAccont type :- "<<Accounttype;
			cout<<"\nBalance ammount in the account :- "<<Balanceammountintheaccount;

		}
};
main()
{
	Bankaccount b1;
	b1.inputdata();
	b1.displaydata();
}

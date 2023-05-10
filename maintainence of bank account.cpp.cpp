#include<iostream>
#include<string>
using namespace std;
class account //declar class
{
	public:
		char name[30];
		int acc_num,acc_type;
		int balance;
		int amount;
		
		void getdata()
		{
			cout<<"\nEnter details\ncustomer name: ";
			gets(name);
			cout<<"\nAccount number: ";
			cin>>acc_num;
			cout<<"\nAccount type: \n1.Saving Account\n2.Current Account\n";
			cin>>acc_type;
			cout<<"Account balance: ";
			cin>>balance;
		}
		
		void display() //to dispaly balance
		{
			cout<<"\nYour account balance: "<<balance;
		}
		void withdraw() //to withdraw money fron account
		{
			cout<<"\nEnter the amount you want to withdraw: ";
			cin>>amount;
			if(amount>balance)
			cout<<"\ninsuficint balance";
			else
			balance=balance-amount;
			display();
		}
};
class cur_acct:public account //class current account
{
	public:
		void panelty()
		{
			if(balance<200 && acc_type==2)
		{
			balance==balance-20;
			display();
		}	
		}
};
class sav_acct:public account //class saving account
{
	public:
		void interest()
		{
			int t;
			cout<<"\nEnter time interval in year: ";
			cin>>t;
			balance=balance*(1+2*t);
			display();
		}
};
main()
{
	account ac;
	ac.getdata();
	ac.display();
	ac.withdraw();
}

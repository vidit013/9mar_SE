#include<iostream>
using namespace std;
class person
{
	public:
		void nameage()
		{
			cout<<"Name: "<<endl;
			cout<<"Age: ";
		}
};
class student
{
	public:
		void percentage()
		{
			cout<<"\nPercentage: 78% ";
		}
};
class teacher:public person, public student
{
	public:
		void salary()
		{
			cout<<"\nsalary: 50,000 ";
		}
};
main()
{
	teacher obj1;
	obj1.nameage();
	obj1.percentage();
	obj1.salary();
}

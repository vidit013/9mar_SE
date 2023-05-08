#include<iostream>
using namespace std;
class cricketer
{
	public:
		void input()
		{
			cout<<"Total runs :- "<<endl;
			cout<<"Average runs :- "<<endl;
			cout<<"Best performance :-"<<endl;
		}
};
class batsman:public cricketer
{
	public:
		void display()
		{
			cout<<"calculate Average runs :- ";
		}
};
main()
{
	batsman obj1;
	obj1.input();
	obj1.display();

}

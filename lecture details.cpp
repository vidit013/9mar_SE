#include<iostream>
using namespace std;
class lecture
{
	char nameofthelecture[20];  
	char nameofthesubject[20];
	char nameofcourse[20];
	int numberoflectures;
	public:
		void inputdata()
		{
			cout<<"Enter the Name of the lecture :- "<<endl;
			cin>>nameofthelecture;
			cout<<"Enter the Name of the subject :- "<<endl;
			cin>>nameofthesubject;
			cout<<"Enter the Name of course :- "<<endl;
			cin>>nameofcourse;
			cout<<"Enter the Number of the lectures :- "<<endl;
			cin>>numberoflectures;
		}
		void displaydata()
		{
			cout<<"\nName of the lecture :- "<<nameofthelecture;
			cout<<"\nName of the subject :- "<<nameofthesubject;
			cout<<"\nName of course :- "<<nameofcourse;
			cout<<"\nNumber of the lectures :- "<<numberoflectures;
			
		}
};
main()
{
	int n=5,i;
			for(i=0;i<n;i++)
			{
				lecture l1;
            	l1.inputdata();
	            l1.displaydata();
				
			}
}

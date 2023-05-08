#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream file1; //to write data
	string data;
	file1.open("tops2.txt",ios::app);
	
	
	cout<<"Enter data: ";
	cin>>data;
	
	file1<<data;
	
	file1.close();
	
    ifstream file2; //to read data
    file2.open("tops2.txt");
    file2>>data;
    cout<<data;
}

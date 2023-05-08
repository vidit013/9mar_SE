#include<iostream>
using namespace std;
template<class T>
void sort(T arr[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				T temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
main()
{
   int arr[]={5,8,1,9,3};
   int n= sizeof(arr) / sizeof(arr[0]);
   
   sort(arr,n);
   
   cout<<"Sorted array:";
   for(int i=0;i<n;i++)
   {
   	cout<<arr[i]<<" ";
   }
}

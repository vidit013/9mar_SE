#include<stdio.h>
main()
{
	int a,b,sum;
	int *p,*q; 
	printf("Enter the value of a:- ");  
	scanf("%d",&a);
	printf("Enter the value of b:- ");
	scanf("%d",&b);
	
	p=&a; //address of a
	q=&b; //address of b
	
	sum = a + b;  //sum the numbers by pointers
	printf("Sum of the numbers is %d",sum);
}

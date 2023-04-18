#include<stdio.h>
struct employee
{
	int empno;
	char empname[20];
	char address[20];
	int age;
}
main()
{
	struct employee p;
	
	int n = 5; //print information of ive employee
	int i;
	
	for(i=1;i<=5;i++) //for loop to check
{
	printf("\nEnter the details of employee %d",i);
	
	printf("\nEnter the empno = ");
	scanf("%d",&p.empno);
	printf("empno = %d",p.empno);
	
	printf("\nEnter the empname = ");
	scanf("%s",&p.empname);
	printf("empname = %s",p.empname);
	
	printf("\nEnter the address = ");
	scanf("%s",&p.address);
	printf("address = %s",p.address);
	
	printf("\nEnter the age = ");
	scanf("%d",&p.age);
	printf("age = %d",p.age);
	
	
	}
}

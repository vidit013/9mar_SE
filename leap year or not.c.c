#include<stdio.h>
main()
{
	int year;
	printf("enter year =");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("leap year");
	}
	else
	{
		printf("not a leap yaer");
	}
}

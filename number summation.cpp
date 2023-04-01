#include<stdio.h>
main()
{
	int i,n;
	int sum,remainder;
	printf("enter the value of n:- ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		remainder = n % 10;
		sum = sum + remainder;
		n/=10;
	}
	printf("sum is %d",sum);
}

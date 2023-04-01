#include<stdio.h>
main()
{
	int i,num,fact;
	printf("enter the number to find factorial : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
		printf("factorial of num is %d\n",fact);
	}
}

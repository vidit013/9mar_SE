#include<stdio.h>
main()
{
	int i,a,n;
	printf("enter value of n :");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		a = n * i;
		printf("%d * %d = %d\n",i,n,a);
	}
}

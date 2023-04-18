#include<stdio.h>
main()
{
	int i,n,x;
	printf("enter the of n:- ");
	scanf("%d",&n);
	
	int max=0; 
	
	for(i=0;i<=n;i++) 
	{
		printf("enter the x %d:-",i);
		scanf("%d",&x);
		
		if(max < x)
		{
			max = x;
		}
	}
	printf("\nmax = %d",max);
}

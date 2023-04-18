#include<stdio.h>
main()
{
	int i,n;
	printf("enter the value of n:- ");
	scanf("%d",&n);
	
	int t1=0,t2=1;  //0 and 1 already taken
	int next= t1 + t2;
	
	for(i=2;i<=n;i++) //for loop to scan
	{
		printf("%d,",next);
		t1 = t2;
		t2 = next;
		next = t1 + t2;
	}
	
}

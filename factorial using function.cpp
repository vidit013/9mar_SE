#include<stdio.h>
int factorial()
{
	int n,i,fact=1;
	printf("we are going to calculate the factorial of number:- ");
	printf("\nEnter the value of n:- ");
	scanf("%d",&n);
	for(i=1;i<=n;i++) //for loop to check
	{
		fact=fact*i;
	}
	return fact;

}
main()
{
	int ans;
	ans=factorial(); // function calling
	printf("\n factorial=%d",ans);
}

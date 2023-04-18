#include<stdio.h>
main()
{
	int n,reversed=0,remainder,original;
	printf("Enter the value of n:- ");
	scanf("%d",&n);
    original=n;
    
	while(n!=0)
	{
		remainder = n % 10;
		reversed = reversed * 10 + remainder;
		n /= 10;
	}
	if(original==reversed) 
	{
		printf("%d Number is palindrome",original);
	}
	else
	{
		printf("%d Number is not palindrome",original);
	}
}

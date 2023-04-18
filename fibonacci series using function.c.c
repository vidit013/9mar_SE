#include<stdio.h>
void fibonacci()
{
	int t1=0,t2=1,next,i,n; //0 and 1 already taken
	printf("\nEnter the value of n:- ");
	scanf("%d",&n); // to scan the number  
	for(i=2;i<=n;i++){      //for loop to check 
		printf("%d",next);
		t1=t2;
		t2=next;
		next = t1 + t2;
	}
}
main()
{
	fibonacci(); //function calling
}

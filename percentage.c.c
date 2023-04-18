#include<stdio.h>
main()
{
	float s1,s2,s3,s4,s5,percentage,sum;
	printf("enter 1st subject marks =");
	scanf("%f",&s1);
    printf("enter 2nd subject marks =");
	scanf("%f",&s2);
	printf("enter 3rd subject marks =");
	scanf("%f",&s3); 
	printf("enter 4th subject marks =");
	scanf("%f",&s4);
	printf("enter 5th subject marks =");
	scanf("%f",&s5);
	
    sum = s1+s2+s3+s4+s5;
    printf("the sum is %f \n",sum);
    percentage =sum/5;
    printf("precentage is %f \n",percentage);
    
    if(percentage>75)
    {
    	printf("Distinction");
	}
	else if(percentage>60 && percentage<=75)
	{
		printf("First class");
	}
	else if(percentage>50 && percentage<=60)
	{
		printf("Second class");
	}
	else if(percentage>35 && percentage<=50)
	{
		printf("Pass class");
	}
	else
	{
		printf("Fail");
	}
    
    
	
	
	
	
}

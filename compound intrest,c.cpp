#include<stdio.h>
#include<math.h>
main()
{
	float p,r,t,ci;
	printf("Enter the value of p:- ");
	scanf("%f",&p);
	printf("Enter the value of r:- ");
	scanf("%f",&r);
	printf("Enter the value of t:- ");
	scanf("%f",&t);
	
	ci = p*pow((1+r/100),t)-p;
	printf("The compound interest is %f",ci);
}

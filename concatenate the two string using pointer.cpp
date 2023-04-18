#include<stdio.h>
#include<string.h>
main()
{
	char s1[100],s2[100],*p,*q;
	printf("Enter the s1:- ");
	gets(s1);
	printf("Emter the s2:- ");
	gets(s2);
	
	p=s1; //address of s1
	q=s2; // address of s2
	
	strcat(s1,s2); //use string function
	printf("The concatenate string is %s",s1);
}

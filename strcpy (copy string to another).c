#include<stdio.h>
#include<string.h>
main()
{
	char s1[20]= "Hello world!";
	char s2[20];
	
	strcpy(s2,s1); //using string function
	printf("%s",s2);
}

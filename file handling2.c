#include<stdio.h>
main()
{
	FILE *file1;
	char data[30];
	
	printf("Enter data: ");
	scanf("%s",data);
//	file1=fopen("tops.txt","w");
    file1=fopen("tops.txt","a"); //to read and write data together
	fprintf(file1,"%s",data);
	
	fclose(file1);
	
	file1=fopen("tops.txt","r");
	fscanf(file1,"%s",&data);
	printf("%s",&data);
}

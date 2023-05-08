#include<stdio.h>
main()
{
	FILE *file1;
//	file1=fopen("readdata.txt","w");
    file1=fopen("readdata.txt","r");
	
	char data[30];
//	fprintf(file1,"%s",data);
	
	fscanf(file1,"%s",&data);
	printf("%s",data);
}

#include<stdio.h>
main()
{
	int a[6]={85,74,23,36,18,53}; //declaring array
	int *p,i,j;
	p=&a[0]; //address of a
	
	printf("Normal array\n");
	for(i=0;i<6;i++)
	{
		printf("%d,",*(p+i));
	}
	for(i=0;i<6;i++)
	{
		for(j=i;j<6;j++)
		{
			if(*(p+i) > *(p+j)) //if(*(p+i) < *(p+j)) for sort number in decending order
			{
				*(p+i)=*(p+i) + *(p+j);
				*(p+j)=*(p+i) - *(p+j);
				*(p+i)=*(p+i) - *(p+j);
				
			}
		}
	}
	printf("\nsorted numbers\n");
	for(i=0;i<6;i++)
	{
		printf("%d,",*(p+i));
	}
}

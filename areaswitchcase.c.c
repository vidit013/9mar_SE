#include<stdio.h>
main()
{
	int a,r,b,h,l,num;
	int area;
	printf("enter the num :");
	scanf("%d",&num);

	switch(num)
	{
		case 1:
			printf("enter the b and h : ");
			scanf("%d %d",&b,&h);
			a = b * h / 2;
			printf("area of triangle is %d \n",a);
			break; 
		case 2:
			printf("enter the l and b : ");
			scanf("%d %d",&l,&b);
			a = l * b;
			printf("area of rectangle is %d \n",a);
			break;
		case 3:
			printf("enter the r : ");
			scanf("%d",&r);
			a = 3.14 * r * r;
			printf("area of circle is %d \n",a);
			break;
        default:
        	printf("not an area");
	
	}
}


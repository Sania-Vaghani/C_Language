#include<stdio.h>
main()
{
	int a,b,c;
	int *p,*q;
	
	printf("Enter the value of x : ");
	scanf("%d",&a);
	printf("Enter the value of y : ");
	scanf("%d",&b);
	
	printf("Output :\nBefore Swapping :\n");
	printf("x = %d\n",a);
	printf("y = %d\n",b);
	
	printf("After Swapping:\n");
	
	p=&a;
	q=&b;
	
	c=*p;
	*p=*q;
	*q=c;
	
	printf("x = %d\n",*p);
	printf("y = %d\n",*q);
}

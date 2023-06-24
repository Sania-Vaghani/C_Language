#include<stdio.h>
main()
{
	char a[1000],*p;
	int i,length=0;
	
	printf("Enter Any String : ");
	gets(a);
	
	p=a;
	
	for(i=0;*p!='\0';i++)
	{
		length++;
		p++;
	}
	printf("The Length of a String is : %d ",length);
}
	

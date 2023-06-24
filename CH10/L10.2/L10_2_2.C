#include<stdio.h>
void length(char a[])
{
	int i,count=0;
	for(i=0;a[i]!='\0';i++)
	{
		count++;
	}
	printf("Length is : %d ",count);
}
main()
{
	char a[100];

	printf("Enter Any String : ");
	scanf("%s",&a);
	
	length(a);
	
}

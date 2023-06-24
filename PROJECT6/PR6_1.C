#include<stdio.h>
main()
{
	char a[100];
	int i,count,c=0;
	
	printf("Enter your name:");
	scanf("%s",&a);
	
	count=0;
	while(a[count]!='\0')
	{
		count++;
	}
	
	for(i=0;i<count;i++)
	{
		if(a[i] != a[count-i-1])
		{
			c=1;
			break;
		}
	}
	
	if(c)
	{
		printf("Given name is not palindrome.");
	}
	else
	{
		printf("Given name is palindrome.");
	}
	
}

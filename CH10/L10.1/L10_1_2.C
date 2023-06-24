#include<stdio.h>
main()
{
	int x;
	
	printf("Enter Any Number : ");
	scanf("%d",&x);
	
	if(x%3==0 && x%5==0)
	{
		printf("Number is Divisible by both 3 and 5.");
	}
	else
	{
		printf("Number is not Divisible by both 3 and 5.");
	}
}

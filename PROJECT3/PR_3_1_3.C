#include<stdio.h>
main()
{
	int n,result=0,first,last;
	
	printf("Enter Any Number : ");
	scanf("%d",&n);
	
	last=n%10;
	
	while(n>=10)
	{
        n=n/10;
		
	}
	first= n;
	
	result= first+last;
	
	printf("The sum of the First and the Last Digit : %d ",result);
}

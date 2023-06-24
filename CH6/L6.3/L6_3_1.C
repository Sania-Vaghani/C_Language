#include<stdio.h>
main()
{
	int n,sum=0,i;
	
	printf("Enter Any Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum = sum+i;
	}
	printf("The Sum of all Numbers : %d ",sum);
}

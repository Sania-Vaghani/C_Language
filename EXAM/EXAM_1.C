#include<stdio.h>
void odd(int a,int b)
{
	int i;
	
	printf("All odd number are :\n"); 
	
	for(i=a;i<=b;i++)
	{
		if(i%2==1)
		{
			printf("%d ",i);
		}
	}
}

main()
{
	int a,b;
	
	printf("Enter start : ") ;
	scanf("%d",&a);
	printf("Enter end : ") ;
	scanf("%d",&b);
	
	odd(a,b);
}


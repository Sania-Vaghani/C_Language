#include<stdio.h>

main()
{
	int n;
	
	printf("Enter Size of Array : ");
	scanf("%d",&n);
	
	int a[n];
	int i;
	
	printf("Enter Array Elements\n");
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",& a[i]);
	}
	
	printf("\n\n----------------\n\n");
	printf("Array is : ");
	
	int c=0;
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);	
	    c++;
	    
	}
	 printf("\nLength of Array is : %d ",c);
		
}

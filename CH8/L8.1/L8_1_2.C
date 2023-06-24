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
	
	int count=0;
	float sum=0;
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);	
	    sum=sum+a[i];	
	    count++;	    
	    
	    
	}
	 printf("\nAverage of Array is : %4.2f ",(sum/count));

}

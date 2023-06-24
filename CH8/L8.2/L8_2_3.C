#include<stdio.h>
main()
{
	int a[100],i,n,square;
	
	printf("Enter Array Size : ");
	scanf("%d",&n);
	
	printf("Enter Array Elements :\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("The Square are : ");
	for(i=0;i<n;i++)
	{
		square=a[i]*a[i];
		printf("%d ",square);
	}

}

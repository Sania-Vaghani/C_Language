#include<stdio.h>
main()
{
	int *p;
	int n,i;
	int a[n];
	
	printf("Enter the Array's size : ");
	scanf("%d",&n);
	
	printf("Enter Array's Elements :\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nOutput :\n");
	
	p=&a[0];
	
	for(i=0;i<n;i++)
	{
		printf("%d ",(*p+i) * (*p+i));
	}
}

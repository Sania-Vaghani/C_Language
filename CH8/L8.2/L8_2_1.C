#include<stdio.h>
main()
{
	int n,m,i,j;
	int a[n],b[m],c[100],d[100];
	
	printf("Enter Array A's Size : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	    printf("a[%d] = ",i);
		scanf("%d",&a[i]);	
	}	
		
	printf("Enter Array B's Size : ");
	scanf("%d",&m);
	
	for(i=0;i<m;i++)
	{
	    printf("b[%d] = ",i);
		scanf("%d",&b[i]);	
	}
	
	printf("\n\n---------------\n\n");
	printf("Array C is : ");
	
	for(i=0;i<n;i++)
	{
	    printf("%d ",a[i]);
	}
	for(i=0;i<m;i++)
	{
	    printf("%d ",b[i]);
	}		
    	
}

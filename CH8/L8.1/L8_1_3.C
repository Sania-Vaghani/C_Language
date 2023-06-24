#include<stdio.h>
main()
{
	int n,i=0;
	int a[n], b[n] ,c[n];
	
	printf("Enter Size of Array : ");
	scanf("%d",&n);
	
	printf("Enter Array A's Elements\n");
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}


	printf("Enter Array B's Elements\n");
	for(i=0;i<n;i++)
	{
		printf("Enter b[%d] : ",i);
		scanf("%d",&b[i]);
	}	

	printf("\n\n----------------\n\n");
	printf("Array C is :");
    
    for(i=0;i<n;i++)
    {    
        c[i]=a[i]+b[i];
        printf("%d ",c[i]);
    	
	}
    	
}

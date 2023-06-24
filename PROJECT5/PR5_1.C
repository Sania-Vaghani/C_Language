#include<stdio.h>
main()
{
	int n,i,j;
	int a[100];
	
	printf("Enter the Array's size : ");
	scanf("%d",&n);

    for(i=0;i<n;i++)
	{
        printf("a[%d] = ",i);
	    scanf("%d",&a[i]);
	    
	}
	
	 printf("\n\nNegative Elements from an Array is : ");
	 	
	for(i=0;i<n;i++)
		{
		if(a[i]<0)
	    {
            printf("%d, ",a[i]);	    	
		}
	}
}

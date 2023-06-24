#include<stdio.h>
main()
{
	int *p;
	int a[100],i,n;
	
	printf("Enter Array Size : ");
	scanf("%d",&n);
	
	printf("Enter Array Elements :\n");
	
	for(i=0;i<n;i++)
	{
	    printf("a[%d] = ",i);
	    scanf("%d",&a[i]);
	}
	
	p=&a[0];
	
	
    for(i=0;i<n;i++)
    {
    	if(*p%2==1)
    	{
    		printf("%d ",*p);
		}
		
	}

}

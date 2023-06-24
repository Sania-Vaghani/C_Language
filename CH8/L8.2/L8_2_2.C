#include<stdio.h>
main()
{
	int n1,n2,a[1000],i,j ;

	printf("Enter Start Year : ");
	scanf("%d",&n1);
	
	printf("Enter End Year : ");
	scanf("%d",&n2);
	
	for(i=n1,j=0; i<=n2; i++,j++)
	{
	   if(i%4 == 0)
	   {
	   	    a[j]=i;
	   	    printf("%d ",a[j]);
	   }
	   
	}	
}

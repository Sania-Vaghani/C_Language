#include<stdio.h>
main()
{
	int a[100][100],i,j,n,cube;
	
	printf("Enter Array Size : ");
	scanf("%d",&n);
	
	printf("Enter Array Elements :\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    printf("a[%d][%d] = ",i,j);
	    	scanf("%d",&a[i][j]);
		}

	}
	
	printf("The Cube are :\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    cube = a[i][j]*a[i][j]*a[i][j];
     		printf("%d ",cube);
		}
		printf("\n");

	}

}

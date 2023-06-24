#include<stdio.h>
void cube(int n)
{
	int a[n][n],i,j,*p;
	
	printf("Enter Array Elements :\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Output :\nCube of all Elements :\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			p=&a[i][j];
			printf("%d ",(*p)*(*p)*(*p));
		}
		printf("\n");
	}
}
main()
{
	int n;
	
	printf("Enter Array's Size : ");
	scanf("%d",&n);
	
	cube(n);
}

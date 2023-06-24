#include<stdio.h>
void addition(int n,int a[])
{
	int j;
	int sum =0;
	
	for(j=0;j<n;j++)
    {
    	sum=sum+a[j];
	}
	printf("Sum of an Array : %d ",sum);
}
main()
{
	int i,n;

	printf("Enter Any Number : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter Array Elements :\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
    }

    addition(n,a);
}

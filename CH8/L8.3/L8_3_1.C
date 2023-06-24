#include<stdio.h>
main()
{
	int r,c,i,j,count=0;
	int a[r][c],b[r][c];
	float sum=0;
	
	printf("Enter Array's Row Size : ");
	scanf("%d",&r);
	printf("Enter Array's Column Size : ");
	scanf("%d",&c);
	
	printf("Enter Array A's Elements : \n");
	
    for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
		{ 
		    printf("a[%d][%d] = ",i,j);
		    scanf("%d",&a[i][j]);
		}		
	}	
	printf("\n\n---------------\n\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum += a[i][j];
			count++;
		}
	}
	printf("Average of an Array is : %3.2f",sum/count);
}

#include<stdio.h>
main()
{
	int r,c,i,j,x,y;
	int a[100][100],sum1=0,sum2=0;
	
	printf("Enter Array's Row Size : ");
	scanf("%d",&r);
	printf("Enter Array's Column Size : ");
	scanf("%d",&c);
	
	printf("Enter Array Elements : \n");

   for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
		{ 
		    printf("a[%d][%d] = ",i,j);
		    scanf("%d",&a[i][j]);
		}		
	}
    
	printf("\n\n---------------\n\n"); 
	
	printf("Enter Row Number : ");
	scanf("%d",&x);
	
	printf("Elements of Row %d : ",x);
	i=x;
	for(j=0;j<c;j++)
	{
       printf("%d, ",a[i][j]);
    }
    
    printf("\nThe Sum of Row %d : ",x);
    for(j=0;j<c;j++)
    {
    	sum1 += a[i][j];
	}
	printf("%d",sum1);
	
	printf("\n\nEnter Column Number :");
	scanf("%d",&y);
	
	printf("Elements of Row %d : ",y);
	j=y;
	for(i=0;i<r;i++)
	{
       printf("%d, ",a[i][j]);
    }
    
    printf("\nThe Sum of Row %d : ",y);
    for(i=0;i<r;i++)
    {
    	sum2 += a[i][j];
	}
	printf("%d",sum2);

}

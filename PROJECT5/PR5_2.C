#include<stdio.h>
main()
{
	int r,c,i,j,max;
	int a[100][100];
	
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
	
	printf("The Largest element is :");
	
	max=a[0][0];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
           if(a[i][j]>max)
           {
		       max=a[i][j];
		   }
		}

    }
    printf("%d",max);
}

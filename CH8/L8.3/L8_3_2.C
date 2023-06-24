#include<stdio.h>
main()
{
	int r,c,i,j;
	int a[10][10],b[10][10],d[10][10];
	
	printf("Enter Array's Row Size : ");
	scanf("%d",&r);
	printf("Enter Array's Column Size : ");
	scanf("%d",&c);
	
	printf("Enter Array A's Elements : \n");
	if(r!=c){
		printf("Row and Column dont match....");
	}
	else{
	
    for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
		{ 
		    printf("a[%d][%d] = ",i,j);
		    scanf("%d",&a[i][j]);
		}		
	}
		
	printf("Enter Array B's Elements : \n");
	
    for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
		{ 
		    printf("a[%d][%d] = ",i,j);
		    scanf("%d",&b[i][j]);
		}		
	}	
	printf("\n\n---------------\n\n"); 
	
	printf("Array C is :\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		   d[i][j]= a[i][j]+b[i][j];
		   printf("%d",d[i][j]);
		   printf("\t");
		}
		printf("\n");
    }
}
}
        

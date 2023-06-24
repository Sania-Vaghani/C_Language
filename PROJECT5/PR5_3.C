#include<stdio.h>
main()
{
	int n,i,j;
	int a[100][100],b[100][100];
	
	printf("Enter Array's Row and Column Size : ",n);
	scanf("%d",&n);

	
	printf("Enter Array Elements : \n");

   for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
		{ 
		    printf("a[%d][%d] = ",i,j);
		    scanf("%d",&a[i][j]);
		}		
	}
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
		{ 
		   b[j][i]=a[i][j];
		}		
	}

    printf("\n\n---------------\n\n"); 
	
	printf("The Transpose Matrix of an Array :\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
            printf("%d",b[i][j]);  
            printf("\t");
		}
      printf("\n");
    }

}

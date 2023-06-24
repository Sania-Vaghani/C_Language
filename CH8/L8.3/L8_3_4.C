#include<stdio.h>
main()
{
	char a[5][5];
	int i,j,user;
	int sum=0;
	
	printf("Enter Array's Elements :\n");
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
		   printf("a[%d][%d] = ",i,j);
		   scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n----------------\n\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==0 || j==0 || i==4 || j==4) 
         	{
	        	printf("%d",a[i][j]);
	        	sum += a[i][j];
     	    }
    	    else
     	    {
	         	printf(" ");
	        }
       } 
        printf("\n");
    }
    printf("The Sum of Boundary Elements of an Array : %d ",sum);
}

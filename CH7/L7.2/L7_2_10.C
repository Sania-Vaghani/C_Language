#include<stdio.h>
main()
{
	int i,j,k,l ;
	
	for(i=1;i<=5;i++)
	{
		for(k=4;k>=i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
	    }
	    for(l=i;l>1;l--)	
        {	
	        printf("%d",l-1);  
        }
        printf("\n");
    }

}

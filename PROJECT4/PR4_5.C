#include<stdio.h>
main()
{
	int i,j,k,l,m;
	
	for(i=1;i<=5;i++)
	{
		for(l=1;l<=i;l++)
		{
			printf("%d",l);
		}
		for(k=5;k>i;k--)
		{
			printf(" ");
    	}
    	for(m=5;m>i;m--)
    	{
    		printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		
	  printf("\n");	
	}
}

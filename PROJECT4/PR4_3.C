#include<stdio.h>
main()
{
	int i,j,k ;
	
	for(i=1;i<=5;i++)
	{
		for(j=2;j<=i;j++)
    	{
			printf(" ");
		}
		for(k=i;k<=5;k++)
		{
			(k%2==1) ? printf("1") : printf("0");
		}

 	  printf("\n");	
    }
}

#include<stdio.h>
main()
{
	int i;
	
	for(i=1;i<=5;i++)
	{
		if(i==1 || i==5)
		{
			printf("*  *  *  *  *\n\n");
		}
		else
		{
			printf("*\n\n");
		}
	}
}

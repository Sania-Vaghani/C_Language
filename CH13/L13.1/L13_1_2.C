#include<stdio.h>
main()
{
	FILE *fp;
	int i,num;
	
	fp=fopen("divide.txt","w");
	 
	printf("Numbers that are divisible by both 3 & 5  :\n");
	
    for(i=1;i<=50;i++)
    {
        if(i%3==0 && i%5==0)
        {
            putw(i,fp);
        }
    }

   	printf("data Write Successfully...");

	fclose(fp);
	
	printf("\n\n-----------------\n\n");
	
	fp=fopen("divide.txt","r");
	
	while( (num=getw(fp)) != EOF)
	{
		printf("%d\n",num);
	}

	fclose(fp);
	
	
}

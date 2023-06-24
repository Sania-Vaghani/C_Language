#include<stdio.h>
main()
{
	FILE *fp;
	int n1,n2,num,i;
	
	fp = fopen("leap.txt","w");
	
	for(i=0;i<=4;i++)
	{
    	printf("Enter Start Year : ");
	    putw(n1,fp);
	    printf("Enter End Year : ");
        putw(n2,fp);
	} 
 
    printf("Data Write successfully...");
     
    fclose(fp);
    
 	printf("\n\n-----------------\n\n");
	
	fp=fopen("leap.txt","r");
	
	while( (num=getw(fp)) != EOF)
	{
		printf("%d\n",num);
	}

	fclose(fp);
	
	
}

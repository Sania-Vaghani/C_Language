#include<stdio.h>
main()
{
	FILE *fp;
	char data[1000];
	
	fp = fopen("sania.txt","r");
	
	while(fgets(data,5,fp)!= NULL)
	{
	    printf("%s",data);	
	}
	  
	fclose(fp);
	
	fp = fopen("vaghani.txt","w");
	
	printf("Enter any Content : ");
	gets(data);
	
    fputs(data,fp);
    fputs("\n",fp);
    
    printf("data Write Successfully...");
    
    fclose(fp);
}

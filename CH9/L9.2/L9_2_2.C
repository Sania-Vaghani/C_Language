#include<stdio.h>
#include<string.h>
main()
{
	int password=12345;
	int pass;
	char email[]="saniyavaghani16@gmail.com";
	char emailid[100];
	
	printf("Enter your Email : ");
	gets(emailid);
	printf("Enter you password : ");
	scanf("%d",&pass);
	
    if(pass == password)
    {
    	if(strcmp(emailid,email) ==0)
    	{
		    printf("\nLogin Successful...");
        }
    
	}
	else
	{
		printf("\nLogin Failed.Invalid Credentials.");
	}
	
}

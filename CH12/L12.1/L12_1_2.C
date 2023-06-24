#include<stdio.h>
struct Employee_Record_System
{
	int emp_id;
	char emp_name[100];
	int emp_age;
	char emp_role[100];
	char emp_city[100];
	int emp_experience;
	char emp_company_name[100];
}s[1000];

main()
{
	int i,n;
	
	printf("How Many Input : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
        printf("Enter emp_id : ");
    	scanf("%d",&s[i].emp_id);
	
	    printf("Enter emp_name : ");
	    fflush(stdin);
    	gets(s[i].emp_name);
	
    	printf("Enter emp_age : ");
      	scanf("%d",&s[i].emp_age);
	
     	printf("Enter emp_role : ");
    	fflush(stdin);
    	gets(s[i].emp_role);	
	
    	printf("Enter emp_city : ");
    	fflush(stdin);
    	gets(s[i].emp_city);	
	
    	printf("Enter emp_experience : ");
    	scanf("%d",&s[i].emp_experience);	
	
    	printf("Enter emp_company_name : ");
    	fflush(stdin);
    	gets(s[i].emp_company_name);
	
    	printf("\n");
    }
	
	printf("\n\n----------------\n\n");
	
	for(i=0;i<n;i++)
	{
       printf("emp_id : %d , emp_name : %s , emp_age : %d , emp_role : %s , emp_city : %s , emp_experience : %d , emp_company_name : %s\n",s[i].emp_id,s[i].emp_name,s[i].emp_age,s[i].emp_role,s[i].emp_city,s[i].emp_experience,s[i].emp_company_name);
    }
}

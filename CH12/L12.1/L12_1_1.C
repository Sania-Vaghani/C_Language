#include<stdio.h>
struct Student
{
	int stu_id;
	char stu_name[100];
	int stu_age;
	char stu_course[100];
	char stu_city[100];
	int stu_standard;
	char stu_school[100];
}s1,s2,s3;

main()
{
	printf("Enter stu_id : ");
	scanf("%d",&s1.stu_id);
	
	printf("Enter stu_name : ");
	fflush(stdin);
	gets(s1.stu_name);
	
	printf("Enter stu_age : ");
	scanf("%d",&s1.stu_age);
	
	printf("Enter stu_course : ");
	fflush(stdin);
	gets(s1.stu_course);	
	
	printf("Enter stu_city : ");
	fflush(stdin);
	gets(s1.stu_city);	
	
	printf("Enter stu_standard : ");
	scanf("%d",&s1.stu_standard);	
	
	printf("Enter stu_school : ");
	fflush(stdin);
	gets(s1.stu_school);
	
	printf("\n");
	
	printf("Enter stu_id : ");
	scanf("%d",&s2.stu_id);
	
	printf("Enter stu_name : ");
	fflush(stdin);
	gets(s2.stu_name);
	
	printf("Enter stu_age : ");
	scanf("%d",&s2.stu_age);
	
	printf("Enter stu_course : ");
	fflush(stdin);
	gets(s2.stu_course);	
	
	printf("Enter stu_city : ");
	fflush(stdin);
	gets(s2.stu_city);	
	
	printf("Enter stu_standard : ");
	scanf("%d",&s2.stu_standard);	
	
	printf("Enter stu_school : ");
	fflush(stdin);
	gets(s2.stu_school);
	
	printf("\n");
	
	printf("Enter stu_id : ");
	scanf("%d",&s3.stu_id);
	
	printf("Enter stu_name : ");
	fflush(stdin);
	gets(s3.stu_name);
	
	printf("Enter stu_age : ");
	scanf("%d",&s3.stu_age);
	
	printf("Enter stu_course : ");
	fflush(stdin);
	gets(s3.stu_course);	
	
	printf("Enter stu_city : ");
	fflush(stdin);
	gets(s3.stu_city);	
	
	printf("Enter stu_standard : ");
	scanf("%d",&s3.stu_standard);	
	
	printf("Enter stu_school : ");
	fflush(stdin);
	gets(s3.stu_school);
	
	printf("\n\n----------------\n\n");
	
	printf("stu_id : %d , stu_name : %s , stu_age : %d , stu_course : %s , stu_city : %s , stu_standard : %d , stu_school : %s\n",s1.stu_id,s1.stu_name,s1.stu_age,s1.stu_course,s1.stu_city,s1.stu_standard,s1.stu_school);
    printf("stu_id : %d , stu_name : %s , stu_age : %d , stu_course : %s , stu_city : %s , stu_standard : %d , stu_school : %s\n",s2.stu_id,s2.stu_name,s2.stu_age,s2.stu_course,s2.stu_city,s2.stu_standard,s2.stu_school);
    printf("stu_id : %d , stu_name : %s , stu_age : %d , stu_course : %s , stu_city : %s , stu_standard : %d , stu_school : %s\n",s3.stu_id,s3.stu_name,s3.stu_age,s3.stu_course,s3.stu_city,s3.stu_standard,s3.stu_school);
}


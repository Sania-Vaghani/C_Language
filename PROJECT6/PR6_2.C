#include<stdio.h>
main()
{
	char string_user[100];
	int i,j,count=0 ;
	
	printf("Enter any String : ");
	gets(string_user);
	
	for(i=0 ; string_user[i]!='\0' ; i++)
	{
		for(j=0 ; string_user[j]!='\0' ; j++)
		{
		   if(string_user[i] == string_user[j])
		   {
		      count++ ;
		   }
		}
		printf("Frequency of %c => %d\n",string_user[i],count);
		count=0;
    }
}

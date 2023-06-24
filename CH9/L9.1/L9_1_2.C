#include<stdio.h>
main()
{
	char a[1000],i,n ;
	
	printf("Enter String Size : ");
	scanf("%d",&n);
	
	printf("Enter Any String : ");
	
	for(i=0;i<=n;i++)
	{
		scanf("%c",&a[i]);
	}
	
	printf("Lowercase String : ");
	
	for(i=0;i<=n;i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			printf("%c",a[i]+32);
		}
	}
}

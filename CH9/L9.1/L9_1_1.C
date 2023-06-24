#include<stdio.h>
main()
{
	char a[1000],i,n;

	printf("Enter String Size : ");
	scanf("%d",&n);
	
	printf("Enter Any String : ");
	
	for(i=0;i<=n;i++)
	{
		scanf("%c",&a[i]);
	}
	
	printf("Uppercase string : ");
	
    for(i=0;i<=n;i++)
	{
     	if(a[i]>=97 && a[i]<=122)
		{
			printf("%c",a[i]-32);
		}
	}
	
}

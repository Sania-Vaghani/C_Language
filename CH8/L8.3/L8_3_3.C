#include<stdio.h>
main()
{
	char a[100][100];
	int i,j,user,input;
	int sum=0;
	
	printf("Enter Array Row and Column Size : ");
	scanf("%d",&user);
	
	printf("Enter Array's Elements :\n");
	
	for(i=0;i<user;i++)
	{
		for(j=0;j<user;j++)
		{
		  printf("a[%d][%d] = ",i,j);
		  scanf("%d",&a[i][j]);
	    }
	}
	
    for(i=0;i<user;i++)
	{
		sum = sum+a[i][i];
    }
    printf("The Sum of Diagnols Elements of an Array : %d ",sum);
}

#include<stdio.h>
struct student
{
	int Roll_no;
	char name[100];
	int chem_marks;
	int maths_marks;
	int phy_marks;
}s[100];

main()
{
	int i,n;
	int sum=0;
	float percentage;
	
	printf("Enter student number:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter Details of Student %d :\n",i+1);
		
		printf("Roll_no => ");
		scanf("%d",&s[i].Roll_no);
		
		printf("Name => ");
		fflush(stdin);
		gets(s[i].name);
		
		printf("chem_marks => ");
		scanf("%d",&s[i].chem_marks);
		
		printf("maths_marks => ");
		scanf("%d",&s[i].maths_marks);
		
		printf("phy_marks => ");
		scanf("%d",&s[i].phy_marks);
		
		printf("\n\n");
	
	}
	
		printf("\n\n---------------------------\n\n");
	
	for(i=0;i<n;i++)
	{	
	    sum = sum+s[i].chem_marks+s[i].maths_marks+s[i].phy_marks;
	    
	    percentage=(sum*100)/300;
	    
		printf("%s(%d)\n",s[i].name,s[i].Roll_no);
		printf("Chemistry => %d\n",s[i].chem_marks);
		printf("Mathematics => %d\n",s[i].maths_marks);
		printf("Physics => %d\n",s[i].phy_marks);
		printf("Total => %d/300\n",sum);
		printf("Percent => %.2f%%",percentage);
		sum=0;
		
		printf("\n\n");

	}

	
}

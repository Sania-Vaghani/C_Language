#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,d;
    clrscr();

    printf("Enter Value of a : ");
    scanf("%d",&a);

    printf("Enter Value of b : ");
    scanf("%d",&b);

    printf("Enter Value of c : ");
    scanf("%d",&c);

    printf("Enter Value of d : ");
    scanf("%d",&d);

if(a==b && b==c && c==d && d==a)
{
  printf("All are Same...");
}
else
{   if(a==b && c==d) printf("a and b are Same...\nc and d are Same...");
    else if(b==c && d==a) printf("b and c are Same...\na and d are Same...");
    else if(a==c && b==d) printf("a and c are Same...\nb and d are Same...");
    else if(a==b && b==c) printf("a,b and c are Same...");
    else if(c==d && d==a) printf("a,c and d are Same...");
    else if(b==c && c==d) printf("b,c and d are Same...");
    else if(a==b && d==a) printf("a,b and d are Same...");
    else if(a==b) printf("a and b are Same...");
    else if(b==c) printf("b and c are Same...");
    else if(c==d) printf("c and d are Same...");
    else if(d==a) printf("d and a are Same...");
    else
      {
	if(a>b)
	{
	  if(a>c)
	  { if(a>d) printf("The Maximum value is : %d ",a);
	    else printf("The maximum Value is : %d ",d);
	  }
	  else
	  { if(c>d) printf("The Maximum Value is : %d ",c);
	    else printf("The Maximum Value is : %d ",d);
	  }
	}

       else
       {
	 if(b>c)
	  { if(b>d) printf("The Maximum Value is : %d ",b);
	   else printf("The Maximum Value is : %d ",d);
	  }
	 else
	  { if(c>d) printf("The Maximum Value is : %d ",c);
	   else printf("The Maximum Value is : %d ",d);
	  }
       }
    }
}

 getch();

}
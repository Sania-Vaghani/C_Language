#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    clrscr();

    printf("Enter Value of a : ");
    scanf("%d",&a);
    printf("Enter Value of b : ");
    scanf("%d",&b);
    printf("Enter Value of c : ");
    scanf("%d",&c);

 if(a==b && b==c && c==a) printf("All are Same...");
 else if(a==b) printf("a and b are Same...");
 else if(b==c) printf("b and c are Same...");
 else if(c==a) printf("c and a are Same ...");
 else
 {
      if(a<b)
      {
	if(a<c)
	{ printf("The Minimum Value is : %d ",a);
	}
	else
	{ printf("The Minimum Value is : %d ",c);
	}
      }
      else
      {
	if(b<c)
	{ printf("The Minimum Value is : %d ",b);
	}
	else
	{ printf("The Minimum Value is : %d ",c);
	}
      }
 }
 getch();
}
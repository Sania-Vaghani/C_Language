#include<stdio.h>
#include<conio.h>
main()
{ int x;
  int y;
  int z;
  clrscr();
  printf("Enter Value Of x : ");
  scanf("%d",&x);
  printf("Enter Value Of y : ");
  scanf("%d",&y);
  z=(x*x*x)+(x*x*y)+(y*y*x)+(y*y*y);
  printf("So (x+y)^3 : %d",z);


 getch();
}
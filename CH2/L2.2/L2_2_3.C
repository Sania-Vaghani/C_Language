#include<stdio.h>
#include<conio.h>
main()
{
  int b;
  int h;
  int a;

  clrscr();

  printf("Enter Breath of Triangle : ");
  scanf("%d",&b);

  printf("Enter Length of Triangle : ");
  scanf("%d",&h);

  a=0.5*(b*h);

  printf("Area of Triangle is : %d",a);
  getch();
}




#include<stdio.h>
#include<conio.h>
main()
{
  int a;
  int b;
  clrscr();
  printf("Enter The Value Of a : ");
  scanf("%d",&a);
  printf("Enter The Value Of b : ");
  scanf("%d",&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("Value Of a is : %d\n",a);
  printf("Value Of b is : %d",b);




  getch();
}
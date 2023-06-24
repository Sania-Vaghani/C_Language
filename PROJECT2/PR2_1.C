#include<stdio.h>
#include<conio.h>

main()
{
  int a;

  clrscr();

  printf("Enter Number : ");
  scanf("%d",&a);

  (a%2==0) ? printf("Number is Even.") : printf("Number is Odd.");

  getch();


}
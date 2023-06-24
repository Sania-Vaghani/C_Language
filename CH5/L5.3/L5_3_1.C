#include<stdio.h>
#include<conio.h>
main()
{
  int a,b,c;
  clrscr();

  printf("Enter Value of First Number : ");
  scanf("%d",&a);

  printf("Enter Value of Second Number : ");
  scanf("%d",&b);

  printf("Enter Value of Third Number : ");
  scanf("%d",&c);

  (a<b) ?
    (a<c) ? printf("The Minimum Value is : %d ",a) : printf("The Minimum Value is : %d ",c);
   :(b<c) ? printf("The Minimum Value is : %d ",b) : printf("The Minimum Value is : %d ",c);

 getch();
}
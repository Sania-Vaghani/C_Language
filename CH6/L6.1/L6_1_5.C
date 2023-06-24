#include<stdio.h>
#include<conio.h>
main()
{
  int i,n;
  i=2020;
  n=2040;

  clrscr();
  printf("Enter The First Number : 2020\n",i);
  printf("Enter The Second Number : 2040\n",n);

  while(i<=n)
  {
    printf("%d\n",i);

    i+=4;
  }

  getch();
}
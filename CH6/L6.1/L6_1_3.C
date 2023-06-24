#include<stdio.h>
#include<conio.h>
main()
{
  int n,i;
  i= 1;

  clrscr();
  printf("Enter Any Value : ");
  scanf("%d",&n);

  while(i<=n)
  {
     printf("%d\n",i);

     i++;
  }
  getch();

}
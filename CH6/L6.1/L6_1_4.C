#include<stdio.h>
#include<conio.h>
main()
{
  int n,i;
  i= 1;

  clrscr();
  printf("Enter Any Value : ");
  scanf("%d",&n);

  while(n>=i)
  {
     if(n%2==1)
     {
       printf("%d\n",n);
     }
     n--;
  }
  getch();

}
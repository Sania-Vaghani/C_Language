#include<stdio.h>
#include<conio.h>
main()
{ int a,b,c;
  a=10;
  b=5;
  clrscr();
  c=a+b;
  printf("Addition of 10 and 5 is %d\n",c);
  c=a-b;
  printf("Subtraction of 10 and 5 is %d\n",c);
  c=a*b;
  printf("Multiplication of 10 anf 5 is %d\n",c);
  c=a/b;
  printf("Division of 10 anf 5 is %d\n",c);
  c=a%b;
  printf("Modulo of 10 anf 5 is %d\n\n",c);

  c=a+b;
  printf("10 + 5 = %d\n",c);
  c=a-b;
  printf("10 - 5 = %d\n",c);
  c=a*b;
  printf("10 * 5= %d\n",c);
  c=a/b;
  printf("10 / 5 = %d\n",c);
  c=a%b;
  printf("10 %% 5 = %d\n",c);
  getch();
}
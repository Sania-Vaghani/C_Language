#include<stdio.h>
main()
{
  int i,j,k;


  printf("Enter Any Value : ");
  scanf("%d",&j);

  for(i=1 ; i<=10 ; i++)
  {
     k=j*i;
     printf("%d * %d = %d\n", j,i,k);
  }
  
}

#include<stdio.h>
main()
{
  int i,n;
  i=1;

  printf("Enter Any Number : ");
  scanf("%d",&n);

  do
  {
    if(i%2==0)
    {
     printf("%d ",i);
    }
    i++;
  }
  while(i<=n);
 }

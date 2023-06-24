#include<stdio.h>
main()
{
  int i,n;
  int first_term=0 , second_term=1;
  int next_term=first_term+second_term ;

  printf("Enter Any Number : ");
  scanf("%d",&n);
  
  printf("Output : %d %d ",first_term,second_term);

  for(i=3; i<=n; i++)
  {
  	printf("%d ",next_term) ;
  	first_term = second_term ;
  	second_term = next_term ;
  	next_term = first_term + second_term;
  }
}

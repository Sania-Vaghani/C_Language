#include<stdio.h>
#include<conio.h>
main()
{
  int choice,type;

  clrscr();
  printf("Press 1 for English\n");
  printf("Press 2 for Hindi\n");
  printf("Press 3 for Gujarati\n");

  printf("Enter Your Choice : ");
  scanf("%d",&choice);

  switch(choice)
  {
     case 1:
	  printf("For Top Up Recharge Press 1\n");
	  printf("For Service Recharge Press 2\n");
	  printf("For Internet Recharge Press 3\n");

	  printf("Enter Your Type : ");
	  scanf("%d",&type);

	  switch(type)
	  {
	    case 1: printf("You Have Done Top Up Recharge.\n"); break;
	    case 2: printf("You Have Done Service Recharge.\n"); break;
	    case 3: printf("You Have Done Internet Recharge.\n"); break;
	   default: printf("Recharge Not Available..."); break;
	  } break;
     case 2:
	  printf("Top Up Recharge Ke Liye 1 Dabaiye.\n");
	  printf("Service Recharge Ke Liye 2 Dabaiye.\n");
	  printf("Internet Recharge Ke Liye 3 Dabaiye.\n");

	  printf("Recharge Type Pasand Kare : ");
	  scanf("%d",&type);

	  switch(type)
	  {
	    case 1: printf("Apne Top Up Recharge Karvaya.\n"); break;
	    case 2: printf("Apne Service Recharge Karvaya.\n"); break;
	    case 3: printf("Apne Internet Recharge Karvaya.\n"); break;
	   default: printf("Ap jo Recharge Karvana Chahte Ho Vo Uplabdh Nahi Hai..."); break;
	  } break;
     case 3:
	  printf("Top Up Recharge Mate 1 dabao\n");
	  printf("Service Recharge Mate 2 dabao\n");
	  printf("Internet Recharge Mate 3 dabao\n");

	  printf("Recharge Type Pasand Karo : ");
	  scanf("%d",&type);

	  switch(type)
	  {
	    case 1: printf("Tame Top Up Recharge Karavyu.\n"); break;
	    case 2: printf("Tame Service Recharge Karavyu.\n"); break;
	    case 3: printf("Tame Internet Recharge Karavyu.\n"); break;
	    default:printf("Tame je Recharge Karava mango Cho Te Uplabdh Nathi..."); break;
	  } break;
     default: printf("Invalid Choice.");

  }
  getch();
}
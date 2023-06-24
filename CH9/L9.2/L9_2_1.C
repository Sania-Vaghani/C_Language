#include<stdio.h>
main()
{
	char pass[100];
	char i, isCapital=0 , isSmall=0 , isDigit=0 , isSymbol=0 , length=0; 
     
    printf ("Create Your Password : ");
    gets(pass);
    
    
    for(i=0; pass[i]!=NULL;i++)
    {
         if(pass[i]>=65 && pass[i]<=90) //Capital	
	    {
		    isCapital = 1;
	    }
	    else if(pass[i]>=97 && pass[i]<=122) //Small
	    {
	    	isSmall = 1;
		}
		else if(pass[i]>=48 && pass[i]<=57) //Digit
		{
			isDigit = 1;
		}
		else
		{
			isSymbol = 1;
		}
		length++;
    }   
    
    if(isCapital == 1 && isSmall == 1 && isDigit == 1 && isSymbol == 1 && length>=6)
    {
    	printf("\nYour Password is Strong.");
	}
	else
	{
		printf("\nYour Password is Weak.");
	}
}

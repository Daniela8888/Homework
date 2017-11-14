#include <stdio.h>
#include <string.h>
main()
{
   char na[7];
   char na2[11];
   char cb[5];
   char iban [25];
   
   
   
   printf("\nEnter number" );
   scanf("%s",&na);
   printf("\nEnter number of account(10) ");
   scanf("%s",&na2);
   printf("\nEnter code of bank(4) ");
   scanf("%s",&cb); 
   
   
   int i;
   for(i=0;i<4;i++)
    iban[4+i]=cb[i];
  
   for(i=0;i<6;i++)
    iban[8+i]=na[i];   
   
   
   for(i=0;i<10;i++)
    iban[14+i]=na2[i];
		
		
  
   iban[24]='\0';
   iban[0]='S';
   iban[1]='K';
   iban[2]='0';
   iban[3]='0';
   				     
     
   i=4;
   int c=0;
   while(i<=23)
   {
   	 if(c<96)
   	    c=10*c+iban[i++]-48;
   	   c=c%97;   
   }
  
  
  
  
  
  
   c=c*1000000+282000;
   c=c%97;
   c=98-c;
   iban[2]=c/10+48;
   iban[3]=c%10+48;
   
   printf("\nIBAN kod: %s",iban); 
}

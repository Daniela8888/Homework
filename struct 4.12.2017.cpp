#include <stdio.h>
#include <ctype.h>

typedef struct {
	int a;
	int b;
}rectangle;

int main(){
	
	FILE *fr,*fw;
	fr=fopen("data.txt","r");
  if(fr==NULL){
     printf("ERROR! I cannot open the file !");
     return 1;
  }
  fw=fopen("w-data.txt","w");
  if(fw==NULL){
     printf("ERROR! I cannot open the file !");
     fclose(fr);
     return 1;
}
 a = fgeta(fr);
    while (a != EOF)
    {
        printf ("a= %d ", a);
        a = fgeta(fr);
    }
    
    
b = fgetb(fr);
    while (b != EOF)
    {
        printf ("b= %d ", b);
        b = fgetb(fr);
    }
int A,P;
A=a*b;
P=2*(a+b);
printf("Area of rectangle is: %d",A);
printf("Perimeter of rectangle is: %d",P);
}

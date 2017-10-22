#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b,c;
	
	printf("Enter side a: ");
	scanf("%d",&a);
	printf("Enter side b: ");
	scanf("%d",&b);
	printf("Enter side c: ");
	scanf("%d",&c);
	if(c == sqrt((a * a ) + (b * b))) 
		printf("trojuholnik je pravouhly");
	else{
		printf("nie je pravouhly");
	}
}

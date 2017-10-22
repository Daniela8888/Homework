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
	if((a+b>c) && (a+c>b) &&(b+c>a))             
	printf("da sa narysovat");
	else{
		printf("neda sa zostrojit");
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main()
{
	srand(time(NULL));
	int f[N];
	
	int i;
	for(i=0;i<N;i++){
		f[i]=rand()%9999;
			}
	for(i=0;i<N;i++){
		printf("%d  ",f[i]);
	}
	int evennumbers=0;
	for(i=0;i<N;i++){
		if(f[i]%2==0)
		evennumbers++;
		}
		printf("\n\nEven numbers are:%d ",evennumbers);

	int oddnumbers=0;
	for(i=0;i<N;i++){
			if(f[i]%2!=0)
		oddnumbers++;
		}
		printf("\n\nOdd numbers are:%d ",oddnumbers);
		
	int twoDigit=0;
	for(i=0;i<N;i++){
		if(f[i]>9&&f[i]<100)
		twoDigit++;
		}
		
		printf("\n\nTwoDigit numbers:%d ",twoDigit);
		
	int threeDigit=0;
	for(i=0;i<N;i++){
		if(f[i]>99&&f[i]<1000)
			
		threeDigit++;
		}
		printf("\n\nThreeDigit numbers:%d ",threeDigit);
	
	int fourDigit=0;
	for(i=0;i<N;i++){
			if(f[i]>999&&f[i]<10000)
		fourDigit++;
		}
		printf("\n\nFourDigit numbers:%d ",fourDigit);
	
		
	int min=f[0];
	for(i=0;i<N;i++){

			if(min>f[i])
			min=f[i];
			}
		printf("\n\nMin number:%d ",min);
		
	int max=f[0];
	for(i=0;i<N;i++){

			if(max<f[i])
			max=f[i];
			}
		printf("\n\nMax number:%d ",max);
	
	int fromend=f[0];
	for(i=0;i<N;i++){
		 int g[N];
		 g[(N-1)-i]=f[i];
		 
}		
		printf("\n\nNumber from the end: %d",fromend);
	
	int palindrom=0;
	
		for(i=0;i<N;i++){
		int a[N];
		int b[N];
		
		
			if(a[i]%10&&b[i]/100&&a[i]%100&&b[i]/1000&&a[i]%1000&&b[i]/10000||a[i]==b[i])                  
			
			palindrom++;
		
		
		}
		printf("\n\nPalindroms: %d",palindrom);

	int divisibleby7=0;
		for(i=0;i<N;i++){
			if(f[i]%7==0)
			divisibleby7++;
		}
			printf("\n\nNumbers which are divisible by 7 are: %d",divisibleby7);
	
	 
	
	

		
}

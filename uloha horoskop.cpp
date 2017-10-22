#include <stdio.h>

int main () 
{
	int day,month;
	
	printf("Please, enter your day of birth: \n");
	printf("Day: ");
	scanf("%d",&day);
	printf("Month: ");
	scanf("%d",&month);
	
	if(day<=0 || day>31 || month<=0 || month>12) {
		printf("wrong Date.");
	}
	else {
	if (month==1){
	switch(day) {
				case 1 ... 19: printf("Capricorn");break;
				case 20 ... 31: printf("Aquarius");break;
			}
		}
		else {
		if (month==2){
		switch(day) {
					case 1 ... 18: printf("Aquarius");break;
					case 19 ... 29: printf("Pisces");break;
				}
			}
			else {
			if (month==3){
			switch(day) {
						case 1 ... 20: printf("Pisces");break;
						case 21 ... 31: printf("Aries");break;
					}
				}
				else {
				if (month==4){
				switch(day) {
							case 1 ... 19: printf("Aries");break;
							case 20 ... 30: printf("Taurus");break;
							default: printf("Wrong input");
						}
					}
					else {
					if (month==5){
					switch(day){
								case 1 ... 20: printf("Taurus");break;
								case 21 ... 31: printf("Gemini");break;

							}
						}
						else {
						if (month==6){
						switch(day){
									case 1 ... 20: printf("Gemini");break;
									case 21 ... 30: printf("Cancer");break;
									default: printf("Wrong input");
								}
							}
							else {
							if (month==7) {
							switch(day){
										case 1 ... 22: printf("Cancer");break;
										case 23 ... 31: printf("Leo");break;
									}
								}
								else {
								if (month==8) {
								switch(day){
											case 1 ...22: printf("Leo");break;
											case 23 ... 31: printf("Virgo");break;
										}
									}
									else {
									if (month==9) {
									switch(day){
												case 1 ... 22: printf("Virgo");break;
												case 23 ...30: printf("Libra");break;
												
											}
										}
										else {
										if (month==10) {
										switch(day){
													case 1 ... 22: printf("Libra");break;
													case 23 ... 31: printf("Scorpio");break;
												}
											}
											else {
											if (month==11) {
											switch(day){
														case 1 ... 21: printf("Scorpio");break;
														case 22 ... 30: printf("Sagittarius");break;
														
													}
												}
												else {
												if (month==12) {
												switch(day){
															case 1 ... 21: printf("Sagittarius");break;
															case 22 ... 31: printf("Capricorn");break;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

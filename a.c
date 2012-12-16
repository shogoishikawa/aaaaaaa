#include<stdio.h>
int main(void){
	
	int i, price;
	do{
		printf("‰ïˆõŽí•Ê”Ô†‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B>>>");
		scanf("%d", &i);
	}while(i == 0);
	printf("‹àŠz‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B>>>");
	scanf("%d", &price);
	
	
	if(i == 1){
		price *= 0.9;
	}else if(i == 2){
		price *= 0.8;
	}else if(i == 3){
		price *= 0.7;
	}
	if(price == 230){
		price = 0;
}
	printf("‹àŠz >>> %d‰~\n", price);
	
	return 0;
}
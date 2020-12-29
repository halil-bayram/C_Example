#include<stdio.h>
int main(){
	
	int sayi=0,hane=0,sayac=1;
		printf("bir sayi giriniz:");
		scanf("%d",&sayi);
	do{
		
		hane=sayi%10;
		printf("%d basamagindaki  sayi: %d\n",sayac,hane);
		sayi=sayi-(hane);
		
		sayac=sayac*10;
		sayi=sayi/10;
		
	
	}
	while(sayi>0);
	
	
	return 0;
}

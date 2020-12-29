#include<stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


int main(){
	float vize[8],final[8],ortalama[8];
	float toportlm=0;
	char dersler[8][50];
	int i,k;
	
	for(i=0;i<8;i++){
		printf("Ders adi giriniz:");
		gets(dersler[i]);
		
		printf("\nvize notu giriniz:");
		scanf("%f",&vize[i]);
		
		printf("\nfinal notu giriniz:");
		scanf("%f",&final[i]);
		ortalama[i]=(vize[i]*0.4)+(final[i]*0.6);
		toportlm+=ortalama[i];
		getchar();
	}
	system("CLS");
	for(k=0;k<8;k++){
		if(ortalama[k]>=(toportlm/8.0)){
			
			printf("\n%s dersinde %.2f ortalama ile basarili:",dersler[k],ortalama[k]);
		}
		else if(ortalama[k]<(toportlm/8.0)){
			
			printf("\n%s dersinde %.2f ortalama ile basarisiz:",dersler[k],ortalama[k]);
		}
		
	}
	
		printf("\ngenel Ortalaman: %.2f",toportlm/8.0);
	
return 0;
}

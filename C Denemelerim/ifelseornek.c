#include<stdio.h>
#include <stdlib.h>

int main (){
	
	int vize1,vize2,vize3,final;
	float okulort;
	float dersort;
	printf("1.vize notunuzu giriniz:");
	scanf("%d",&vize1);
	
	printf("final notunuzu giriniz:");
	scanf("%d",&final);
	
	printf("okul ortalamanizi giriniz:");
	scanf("%f",&okulort);
	
	dersort=(vize1*4)/10.0+(final*6)/10.0;
	
	
	if ( dersort >= 90 ){
		
		printf("Harf Notunuz -AA- Ve Ders Ortalamaniz: %.2f",dersort);
		
	}
	else if(dersort>=80 && dersort<90){
		
			printf("Harf Notunuz -BA- Ve Ders Ortalamaniz: %.2f",dersort);
		
	}
	else if(dersort>=70 && dersort<80){
		
			printf("Harf Notunuz -BB- Ve Ders Ortalamaniz: %.2f",dersort);
		
	}
	else if(dersort>=60 && dersort<70){
		
			printf("Harf Notunuz -CB- Ve Ders Ortalamaniz: %.2f",dersort);
		
	}
	else if(dersort>=50 && dersort<60){
		
			printf("Harf Notunuz -CC- Ve Ders Ortalamanýz: %.2f\n",dersort);
			if(okulort< 2.5){
				printf("Ortalamaniz Dusuk Bute Girmeniz Sizin icin Daha iyi Olacaktir.");
				
			}
		
	}
	else if(dersort>=40 && dersort<50){
		
			printf("Harf Notunuz -DC- Ve Ders Ortalamaniz: %.2f\n",dersort);
				if(okulort< 2.5){
				printf("Ortalamaniz Dusuk Bute Girmeniz Sizin icin Daha iyi Olacaktir.");
				
			}
		
	}
	else if(dersort>=30 && dersort<40){
		
			printf("Harf Notunuz -DD- Ve Ders Ortalamaniz: %.2f\n",dersort);
				if(okulort< 2.5){
				printf("Ortalamaniz Dusuk Bute Girmeniz Sizin icin Daha iyi Olacaktir.");
				
			}
		
	}
	else if(dersort>=0 && dersort<30){
		
			printf("Harf Notunuz -FF- Ve Ders Ortalamaniz: %.2f\n",dersort);
				if(okulort< 2.5){
				printf("Ortalamaniz Dusuk Bute Girmeniz Sizin icin Daha iyi Olacaktir.");
				
			}
		
	}
	
	return 0;
}

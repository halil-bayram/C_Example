#include<stdio.h>
int main(){
	
	int islem;
	int bakiye=1000;
	int tutar;
	
	printf("islemler\n1: Para cekme\n2: Para yatirma\n3: havale yapma\n4: Bakiye sorgulama\n");
	
	printf("Lutfen islemi seciniz");
	scanf("%d",&islem);
	
	switch(islem){
		
		case 1:
			printf("Bakiyeniz: %d\n",bakiye);
			printf("cekilecek tutari giriniz:");
			scanf("%d",&tutar);
			if(tutar>bakiye){
				printf("istenen tutar bakiyeden fazla olduğu icin verilemiyor!");
			}
			else{
				bakiye -=tutar;
			printf("Bakiyeniz: %d\n",bakiye);
			printf("isleminiz basariyla gerceklesmistir  :)");
			
			}
			break;
			
			
		case 2:
			printf("Bakiyeniz: %d\n",bakiye);
			printf("yatirilacak tutari giriniz:");
			scanf("%d",&tutar);
			
			bakiye +=tutar;
			printf("Bakiyeniz: %d\n",bakiye);
			printf("isleminiz basariyla gerceklesmistir  :)");
			break;
		case 3:
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Havale tutari giriniz:");
			scanf("%d",&tutar);
			if(tutar>bakiye){
				printf("istenen tutar bakiyeden fazla olduğu icin verilemiyor!");
			}
			else{
				bakiye -=tutar;
			printf("Bakiyeniz: %d\n",bakiye);
			printf("isleminiz basariyla gerceklesmistir  :)");
			}
			break;
		case 4:	
		printf("Bakiyeniz: %d\n",bakiye);
		printf("isleminiz basariyla gerceklesmistir  :)");
			break;
		default:
			printf("Lutfen belirtilen Sekmelerdeki islemleri seciniz");
		
	}
	return 0;
}

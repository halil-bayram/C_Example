#include<stdio.h>

void hesapla(void);
int sayi1=0,sayi2=0,durum=0;
char cevap;
void hesapla(void){

printf("Bir Sayi giriniz:");
scanf("%d",&sayi1);

printf("ikinci sayiyi giriniz:");
scanf("%d",&sayi2);

printf("girilen sayilarin toplami:%d\n",sayi1+sayi2);
	printf("Devam etmek istermisiniz:E\n");
	scanf("%s",&cevap);
	if(cevap=='E'||cevap=='e'){
		
		durum=1;
		}
		else{
		printf("hatali giris yaptiniz!");
		durum=0;
		}

}


int main(){
	
	hesapla();
	
	do{
		
			hesapla();
	}
	while(durum==1);
	
	
	return 0;
}

#include<stdio.h>
#include<conio.h>
int main() {

	int sayi1,sayi2,enbuyuk,i;
	printf("1. Sayiyi Giriniz:");
		scanf("%d",&sayi1);
	 printf("2. Sayiyi Giriniz:");
		scanf("%d",&sayi2);
	for( i=1; i<=sayi1*sayi2; i++) {
		if( (i%sayi1==0) && (i%sayi2==0) )
		{
			printf("OKEK: %d \n",i);
			break;
		}
	}
	if(sayi1>sayi2) {
		enbuyuk = sayi1;
	} else {
		enbuyuk = sayi2;
	}
	for(enbuyuk; enbuyuk>0; enbuyuk--) {
		if( (sayi1%enbuyuk==0) && (sayi2%enbuyuk==0) ) {
			
			printf("OBEB: %d",enbuyuk);
			break;
		}
	}
	 return 0;

}

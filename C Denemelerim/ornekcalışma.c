#include <stdio.h>
int main(){
	
	int a,b,c,d,e;
	float toplam;
	printf("Lütfen Beþ Adet Sayý Giriniz!");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);	
	toplam = (a+b+c+d+e)/5.0;
	printf("Girdiðiniz Sayýlarýn Aritmatik Ortlamasý %.2f",toplam);
	
	return 0;
}

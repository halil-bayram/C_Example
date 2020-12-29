#include <stdio.h>
int main(){
	int a1=42;
	char b1=66;
	char b2='B';
	float c1=4.2;
	double d1 =0.21;
	//Eger %f arasýna %.1f gibi sayý koyarsak verilen sayýnýn virgülden sonra birinci basamagýný alýr
	//double deðiþkenini yazdýrýrkende ayný þekilde olacaktýr
	
	printf("%d %c %d %f %f %s\n",a1,b1,b2,c1,d1,"Yazilimci");
	//eger %d nin arasýna sayý yazýlýrsa yazýlan sayý kadar boþluk býrakýr.
	
	printf("%d byte\n",sizeof(char));
	printf("%d byte\n",sizeof(int));
	printf("%d byte\n",sizeof(short int));
	printf("%d byte\n",sizeof(long int));
	printf("%d byte\n",sizeof(float));
	printf("%d byte\n",sizeof(double));
	//size of komutu oluþturdugunuz deðiþkenin bilgisayarýnýzda kaç byte lýk yer kabladýgýný gösteriyor.
	
	return 0;
}

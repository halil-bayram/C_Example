#include <stdio.h>
int main(){
	int a1=42;
	char b1=66;
	char b2='B';
	float c1=4.2;
	double d1 =0.21;
	//Eger %f aras�na %.1f gibi say� koyarsak verilen say�n�n virg�lden sonra birinci basamag�n� al�r
	//double de�i�kenini yazd�r�rkende ayn� �ekilde olacakt�r
	
	printf("%d %c %d %f %f %s\n",a1,b1,b2,c1,d1,"Yazilimci");
	//eger %d nin aras�na say� yaz�l�rsa yaz�lan say� kadar bo�luk b�rak�r.
	
	printf("%d byte\n",sizeof(char));
	printf("%d byte\n",sizeof(int));
	printf("%d byte\n",sizeof(short int));
	printf("%d byte\n",sizeof(long int));
	printf("%d byte\n",sizeof(float));
	printf("%d byte\n",sizeof(double));
	//size of komutu olu�turdugunuz de�i�kenin bilgisayar�n�zda ka� byte l�k yer kablad�g�n� g�steriyor.
	
	return 0;
}

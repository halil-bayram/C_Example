#include <stdio.h>
int main(){
	
	int a,b,c,d,e;
	float toplam;
	printf("L�tfen Be� Adet Say� Giriniz!");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);	
	toplam = (a+b+c+d+e)/5.0;
	printf("Girdi�iniz Say�lar�n Aritmatik Ortlamas� %.2f",toplam);
	
	return 0;
}

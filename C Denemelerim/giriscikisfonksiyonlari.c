#include <stdio.h>
#define PI	3.14
int main(){
	
	/*
	giri� ��k�� fonksiyonlar�
	printf ve scanf
	float bir de�er olan x'i yzd�rmak i�in printf("%f",x); benzer bir �ekilde , float de�eri kullan�c�dan almak i�in float olan bir x tan�mlay�p 
	sonra bu de�eri kullan�c�dan almak istersek scanf("%f",&x); �eklinde yaz�yoruz ve & i�areti x ' e kullan�c�dan ald�g�m�z de�eri atad���m�z� g�steriyoruz.
	di�er format belirleyicileri printf 'le ayn�d�r.
	*/
	int yaricap;
	float hacim;
	printf("L�TFEN YARICAPI G�R�N�Z=");
	scanf("%d",&yaricap);
	hacim= (4/3.0)*PI*(yaricap*yaricap*yaricap);
	printf("K�REN�N HACM�= %.2f ",hacim);
	
	return 0;
}

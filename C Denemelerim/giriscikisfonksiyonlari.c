#include <stdio.h>
#define PI	3.14
int main(){
	
	/*
	giriþ çýkýþ fonksiyonlarý
	printf ve scanf
	float bir deðer olan x'i yzdýrmak için printf("%f",x); benzer bir þekilde , float deðeri kullanýcýdan almak için float olan bir x tanýmlayýp 
	sonra bu deðeri kullanýcýdan almak istersek scanf("%f",&x); þeklinde yazýyoruz ve & iþareti x ' e kullanýcýdan aldýgýmýz deðeri atadýðýmýzý gösteriyoruz.
	diðer format belirleyicileri printf 'le aynýdýr.
	*/
	int yaricap;
	float hacim;
	printf("LÜTFEN YARICAPI GÝRÝNÝZ=");
	scanf("%d",&yaricap);
	hacim= (4/3.0)*PI*(yaricap*yaricap*yaricap);
	printf("KÜRENÝN HACMÝ= %.2f ",hacim);
	
	return 0;
}

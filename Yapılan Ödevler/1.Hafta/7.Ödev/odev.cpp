#include<stdio.h>
int main(){
	
	float sut=7.5,pey,sonuc;
	
	printf("Kac kg peynir istersiniz:");
	scanf("%f",&pey);
	sonuc=sut*pey;
	printf("%.2f kg peynir icin %.2f sut gerekli.",pey,sonuc);
	
	return 0;
}

#include<stdio.h>
char notvize=0,notfinal=0,ortalama=0;
char ders[100];
void hesap(void);
void degeral(void);
void degeral(void){
	
	printf("\nLutfen ders adini giriniz:");
	scanf("%s",&ders);
	printf("Lutfen vize notu giriniz:");
	scanf("%d",&notvize);
	printf("Lutfen final notu giriniz:");
	scanf("%d",&notfinal);
	ortalama = (notvize*0.4)+(notfinal*0.6);
	printf("%s Dersi Ortalamaniz: %d",ders,ortalama);
	printf("\n");
	
}
void hesap(void){
	if(ortalama>=60){
			printf("***Dersten Gectiniz***\n");
	}
	else{
		
		printf("***Dersten Kaldiniz***\n");
	}
}
int main(){
	
	degeral();
	hesap();
	degeral();
	hesap();
	degeral();
	hesap();
	degeral();
	hesap();
	degeral();
	hesap();
	degeral();
	hesap();
	degeral();
	hesap();
	degeral();
	hesap();
	return 0;
}

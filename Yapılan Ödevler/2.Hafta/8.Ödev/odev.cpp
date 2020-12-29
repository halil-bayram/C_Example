#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int tut,tahmin,bil=0;
	tut=rand();
	
		do{
	
				printf("tahmin sayinizi giriniz:");
	scanf("%d",&tahmin);
	if(tut==tahmin){
		printf("tebrikler bildiniz\n");
		bil=1;
	}
	else if(tut>tahmin){
		
		printf("sayiyi buyultun\n");
		bil=0;
	}
	else if(tut<tahmin){
		printf("sayiyi kucultun\n");
		bil=0;
	}
	}
	while(bil!=1);
	
	return 0;
}

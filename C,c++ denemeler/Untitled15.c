#include<stdio.h>
int main(){
	int x;
	printf("Bir sayi giriniz:");
	scanf("%d",&x);
	int i;
	for(i=31;i>0;i--){
		if(x>> i&1==1){
			putchar('1');
		}
		else{
			putchar('0');
		}
	}
}

#include<stdio.h>
int main(){
	
	int sayi=0,i,x1=0,x2=0,x3=0,x4=0,toplam=0;
					
	for(i=1000;i<10000;i++){
		sayi=i;
		x1=sayi%10;
		sayi=sayi-(x1);
		sayi=sayi/10;
		x2=sayi%10;
		sayi=sayi-(x2);
		sayi=sayi/10;
		x3=sayi%10;
		sayi=sayi-(x3);
		sayi=sayi/10;
		x4=sayi;
		toplam=(x1*x1*x1*x1)+(x2*x2*x2*x2)+(x3*x3*x3*x3)+(x4*x4*x4*x4);
			if(i==toplam){
			printf("%d\n",i);
			}
	}
	
	return 0;
}

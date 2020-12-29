#include<stdio.h>
int main(){
	
	int i,j,sayi=0;
	
	for(i=1;i<10000;i++){
		
		sayi=0;
		for(j=1;j<i;j++){
			
			if(i%j==0){
				sayi=sayi+j;
			}
		}
		if(sayi==i){
			
			printf("sayi:%d\n",i);
		}
		
	}
	return 0;
}

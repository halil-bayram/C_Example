#include<stdio.h>
int main(){
	
	int toplam=0;
	int i;
	for(i=0;i<=10;i++){
		
		if(i%2==1){
			continue;
		}
		printf("toplanan sayilar: %d\n",i);
		toplam+=i;
	}
	
	printf("sayilar toplami: %d",toplam);
	return 0;
}

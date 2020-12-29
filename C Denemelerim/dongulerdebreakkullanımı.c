#include<stdio.h>
#include<conio.h>

int main(){
	
	int toplam=0;
	 int i=0;
	 int sayi;
	 for(i=0;;i++){
	 	
	 	printf("sayiyi giriniz(     cikmak icin -1 basiniz		)");
	 	scanf("%d",&sayi);
	 	
	 	if(sayi==-1){
	 		break;
		 }
		 
		 toplam+=sayi;
	 	
	 	
	 }
	printf("Toplam: %d",toplam);
	
	
	return 0;
}

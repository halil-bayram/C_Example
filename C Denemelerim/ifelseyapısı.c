#include <stdio.h>

int main(){
	
	int note;
	printf("Lutfen Notunuzu Giriniz:");
	scanf("%d",&note);
	if(note>=60){
		printf("Dersi Gectiniz");
	}
	else {
		printf("Dersi Kaldiniz");
	}
	return 0;
}

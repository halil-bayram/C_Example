#include<stdio.h>

int main(){
	
	
	char harfler[5]={'a','b','c','d','e'};
	
	int i;
	for(i=0;i<5;i++){
		printf("%c",*(harfler+i));
		
	}
	
	return 0;
}

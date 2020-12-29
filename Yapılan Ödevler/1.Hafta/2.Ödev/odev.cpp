#include<stdio.h>
#include <stdbool.h>
int x,y,islemx,islemy;
	bool gir=true;
	void al(void);
	
	
void al(void){
	

	
	if(gir==true){
		printf("X degerini giriniz:");
	scanf("%d",&x);
		printf("Y degerini giriniz:");
	scanf("%d",&y);
	islemx=x;
		islemy=y;
	gir=false;
	}
	else {
		islemx=x;
		islemy=y;
	}
	

}
int main(){
	
	
		 al();
		printf("X+=y: %d",islemx+=islemy);
		
		al();
		printf("\nX-=y: %d",islemx-=islemy);
		
		al();
		printf("\nX*=y: %d",islemx*=islemy);
		
		al();
		printf("\nX+=-y: %d",islemx+=-islemy);
		
		al();
		printf("\nX-=-y: %d",islemx-=-islemy);
		
		al();
		printf("\nX*=-y: %d",islemx*=-islemy);
		
	
	return 0;
}


#include<stdio.h>
	
int main(){
	
	int hiz=0,zaman=0,yol=0,zaman1=0,yol1=0,zaman2=0,yol2=0;
	
	printf("Lutfen hizi km cinsinden giriniz:");
	scanf("%d",&hiz);
	printf("Lutfen zaman dk cinsinden giriniz:");
	scanf("%d",&zaman);
	yol=(zaman/60.0)*(hiz);
	printf("yol: %d",yol);	
	
		printf("\nLutfen hizi km cinsinden giriniz:");
	scanf("%d",&hiz);
	printf("Lutfen zaman dk cinsinden giriniz:");
	scanf("%d",&zaman1);
	yol1=(zaman1/60.0)*(hiz);
	printf("yol: %d",yol1);	
	
		printf("\nLutfen hizi km cinsinden giriniz:");
	scanf("%d",&hiz);
	printf("Lutfen zaman dk cinsinden giriniz:");
	scanf("%d",&zaman2);
	yol2=(zaman2/60.0)*(hiz);
	printf("yol: %d",yol2);	
	
	printf("\ntopla yol/toplam zaman: %.2f",(yol+yol1+yol2)/((zaman/60.0)+(zaman1/60.0)+(zaman2/60.0)));
	return 0;
}

#include<stdio.h>
#include <math.h>
int main(){
	
		
	int a,b,c;
	float x1,x2;
	float delta;
	
	 printf("Lutfen Denklemin a sini Giriniz:");
	 
	 scanf("%d",&a);
	  printf("Lutfen Denklemin b sini Giriniz:");
	 scanf("%d",&b);
	  printf("Lutfen Denklemin c sini Giriniz:");
	 scanf("%d",&c);
	 
	delta= b*b -(4*a*c);
	x1= (-b +(sqrt(delta)))/2*a;
	x2= (-b -(sqrt(delta)))/2*a;
	printf("Denklemin 1.koku %.2f,Denklemin 2.koku %.2f",x1,x2);
	
	return 0;
}

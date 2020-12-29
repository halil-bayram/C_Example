#include <stdio.h>
int main(){
	/*
	-x , x+y*z,(x/7)*y,(a%b)-(x*a+1),3+4*7 bu gibi ifadeler birer aritmatik ifadelerdir
	iþlem sýrasý:
	
	tekli operatörler:(+) (-) (-x,+x) 1.öncelik kendi aralarýnda saðdan sola
	ikili operatörler:*,/,% 2.öncelik kendi aralarýnda soldan saða
	ikili operatörler:+,- 3. öncelik kendi aralarýnda soldan saða
	
	parantez içleri herzaman ilk planda yapýlýr.
	matematikle ayný!
	
	
	*/
	
	
	printf("%d\n",2+3*4);
	
	
	return 0;
}

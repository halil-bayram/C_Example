#include <stdio.h>
int main(){
	/*
	-x , x+y*z,(x/7)*y,(a%b)-(x*a+1),3+4*7 bu gibi ifadeler birer aritmatik ifadelerdir
	i�lem s�ras�:
	
	tekli operat�rler:(+) (-) (-x,+x) 1.�ncelik kendi aralar�nda sa�dan sola
	ikili operat�rler:*,/,% 2.�ncelik kendi aralar�nda soldan sa�a
	ikili operat�rler:+,- 3. �ncelik kendi aralar�nda soldan sa�a
	
	parantez i�leri herzaman ilk planda yap�l�r.
	matematikle ayn�!
	
	
	*/
	
	
	printf("%d\n",2+3*4);
	
	
	return 0;
}

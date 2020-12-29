#include<stdio.h>

int main(){
	
	int i;
	 float nufus=70.000;
	for(i=2000;i<2011;i++){
		printf("%d yilinda insan nufusu %f \n",i,nufus);
		nufus=nufus+(nufus*(0.025));
	}
	return 0;
}

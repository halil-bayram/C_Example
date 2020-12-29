#include <iostream>
#include <string.h>

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int uzunluk=0; char isim[25];	
	printf("Adini Giriniz: \n");
	scanf("%s",&isim);

	uzunluk=strlen(isim);
    int sayac=0,islem=1,enter=0;
	for(int i=0; i<10;i++)
	{
	if(sayac==0)
	{
	islem=2;
	}
	else if(sayac==1)
	{
	islem=1; enter=1;
	}
	else if(sayac==2)
	{
	enter=0; islem=1;
	}
	else if(sayac==3)
	{
	islem=3; enter=1;
	}
	else if(sayac==4)
	{
	enter=0; islem=0;
	}
	else if(sayac==5)
	{
	islem=5; enter=1;
	}
	else if(sayac==6)
	{
	enter=0; islem=1;
	}
	else if(sayac==7)
	{
	islem=3; enter=1;
	}
	else if(sayac==8)
	{
	enter=0; islem=2;
	}
	else if(sayac==9)
	{
	islem=1; enter=1;
    }

		
		for(int x=0; x<uzunluk*islem; x++)
		{
			printf(" "); 
		}
		
		if(enter==1)
		printf("%s\n",isim);
		else
			printf("%s",isim);
		 
	    sayac++;
		
	
	}
		
	
	printf("\n");
	system("pause");
	return 0;
}

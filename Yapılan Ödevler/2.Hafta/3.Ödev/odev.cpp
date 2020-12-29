#include<stdio.h>
int main(){
	 int j,i,sayi,sayac=0;
    printf("Sayiyi girin");
    scanf("%d",&sayi);
    int k=sayi;
    for(j=0;j<k;j++)
	{
    for(i=2;i<sayi;i++)
    {
       if(sayi%i==0)
       {
           sayac++;
       }    
    }     
   
    if(sayac==0)
    {
        printf("%d\n",sayi);
	   
	 }
   	    sayi--;
	    sayac=0;
}
	return 0;
}

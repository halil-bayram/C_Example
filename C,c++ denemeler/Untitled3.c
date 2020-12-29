#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
    int b[10]={96,20,70,60,75,55,85,34,49,13};
    int temp[20],i,j,g;
    for(i=0;i<10;i++)
    {
    	 temp[i]=a[i];
    }
   
    for(i=10,j=0;i<20;i++,j++)
    {
    temp[i]=b[j];	
    }
    	
    
    for(i=0;i<19;i++)
    {
    	for(j=i+1;j<20;j++)
    	{
    	if(temp[j]<temp[i])
		{
		g=temp[i];
		temp[i]=temp[j];
		temp[j]=g;	
		}
		}	
    	}
       
    
	for(i=0;i<20;i++)
	{
         	printf("%d\n",temp[i]);
	}
    
	   getch();
    return 0;
}

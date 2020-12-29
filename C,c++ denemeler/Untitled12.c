#include<stdio.h>
#include<string.h>
int main(){
	char s1[10]="Cemal";
	char s2[10]="Cem";
	char *s3=s2;
	strcat(s2,"il");
	if(strcmp(s1,s2)<0) printf("AA");
	if(strcmp(s2,s3)<0) printf("BB");
}

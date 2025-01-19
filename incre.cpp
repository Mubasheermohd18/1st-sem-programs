#include<stdio.h>
int main(void){
	int a,p,r;
	printf("\nenter the value of a=");
	scanf("%d",&a);
	p=++a;
	printf("\n pre increment=%d",++p);
	r=a++;
	printf("\n post increment=%d",r);
	
}




#include<stdio.h>
void add(){
	int a,b;
	printf("\nenter two numbers for sum:");
	scanf("%d%d",&a,&b);
	printf("\nsum=%d",a+b);
}
void sub(){
	int x,y;
	printf("\nenter two numbers for diff:");
	scanf("%d%d",&x,&y);
	printf("\ndifference=%d",x-y);
}
main(){
	sub();
	add();
	printf("\nhello");//hello written to check 
}

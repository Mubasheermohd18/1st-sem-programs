#include<stdio.h>
float avg(float x, float y){
	float z;
	z=(x+y)/2;
	return z;
}
main(){
	float x,y,a;
	scanf("%f%f",&x,&y);
	a=avg(x,y);
	printf("%.2f",a);
}

#include<stdio.h>
float avg(float x, float y, float z){
	float a;
	a=(x+y+z)/3;
	return a;
}
main(){
	float x,y,z,b;
	scanf("%f%f%f",&x,&y,&z);
	b=avg(x,y,z);
	printf("%.2f",b);
}


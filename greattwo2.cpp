#include<stdio.h>
int big(int x,int y){
	int z;
	if(x>y) z=x;else z=y;
	return z;
}
main(){
	int x,y,a;
	scanf("%d%d",&x,&y);
	a=big(x,y);
	printf("%d",a);
}

#include<stdio.h>
int big(int x,int y){
	if(x>y)
		printf("%d is bigger",x);
	else
		printf("%d is bigger",y);
}
main(){
	int x,y,a;
	scanf("%d%d",&x,&y);
	a=big(x,y);
	printf("%d",a);
}

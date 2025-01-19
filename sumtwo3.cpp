#include<stdio.h>
int add(int x,int y){
int z;
z=x+y;
return z;
}
main(){
	int x,y,a;
	scanf("%d%d",&x,&y);
	a=add(x,y);
	printf("%d",a);
}

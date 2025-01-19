#include<stdio.h>
void add(int x,int y){
int z;
z=x+y;
printf("%d",z);
}
main(){
	int x,y;
	scanf("%d%d",&x,&y);
	add(x,y);
}

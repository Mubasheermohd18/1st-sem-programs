#include<stdio.h>
void big(){
	int x,y;
	scanf("%d%d",&x,&y);
	if(x>y)
		printf("%d is bigger",x);
	else
		printf("%d is bigger",y);
}
main(){
	big();
}

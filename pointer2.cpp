#include<stdio.h>
int f(int *a,int *b){
	return ((*a)+(*b));
}
main(){
	 int x,y,z;
	printf("\n please enter two value:");
	scanf("%d%d",&x,&y);
	z=f(&x,&y);
	printf("\n sum is :%d",z);
}


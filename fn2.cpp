#include<stdio.h>
int fact(int n){
	if((n==0)||(n==1))
	return 1;
	else return(n*fact(n-1));
}
main(){
	int n,m;
	printf("\n plz enter a number:");
	scanf("%d",&n);
	m=fact(n);
	printf("\n Ans=%d",m);
	
}

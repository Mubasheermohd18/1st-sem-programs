#include<stdio.h>
int f(int n){
	if(n==1)
		printf("0");
	else if(n==2)
		printf("1");
	else printf("%d",f(n-1)+f(n-2));
}
int main(){
	
	int n,ans;
	printf("\n please enter n: ");
	scanf("%d",&n);
	f(n);
	printf("\n ans=%d",ans);
}


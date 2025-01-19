/* WAP in C to find the nth power of a numbers
use math.h and pow() function*/
#include<stdio.h>
#include<math.h>
int power(int x, int n){
	int z;
	z=pow(x,n);
	return z;
}
main(){
	int x,n,a;
	scanf("%d%d",&x,&n);
	a=power(x,n);
	printf("answer=%d",a);
}

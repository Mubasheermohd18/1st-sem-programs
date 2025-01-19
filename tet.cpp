#include<stdio.h>
int[]; calculate(int a,int n){
	int b[10],i;
	for(i=0;i<n;i++)
		b[n-i-1]=a[i];
	return b;
}
main(){
	int b[10],a[10],n,i;
	printf("\n how many numbers(<10):");
	scanf("%d",&n);
	printf("\n please enter the %d no's:",n);
	for(i=0;i<n,i++)	
		scanf("%d",&a[i]);
	b=calculate(A,n);
}

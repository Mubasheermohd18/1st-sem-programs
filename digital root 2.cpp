#include<stdio.h>
int cal(int n){
	if(n==0)
		return 0;
	return (n%10)+cal(n/10);
}
int dig(int n){
	if(n<10)
		return n;
	return dig(cal(n));
}
main(){
	int n;
    printf("Enter a number to find its Digital Root: ");
    scanf("%d", &n);

    int result=dig(n);
    printf("The Digital Root of %d is: %d\n",n,result);
    return 0;
}
	

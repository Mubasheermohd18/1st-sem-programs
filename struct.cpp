#include<stdio.h>
main(){
	int x,*y,**z;
	x=5;
	y=&x;
	z=&y;
	printf("\n value of x=%d",x);
		printf("\n value of y=%d",*y);
			printf("\n value of y=%d",**z);
	
}

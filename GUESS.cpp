#include<stdio.h>
int main(void){
	int x;
	do{
		printf("\n enter a number between 0 and 100:");
		scanf("%d",&x);
			if(x<100){
				printf("\n thanky you");
			}
			else{
				printf("\n try again");
			}
			}
	while(x>100);		
	}


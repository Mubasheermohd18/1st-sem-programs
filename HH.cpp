#include<stdio.h>
main(){
	int i,j;
	for(i=1;i<=10;i++){
		for(j=1;j<=20;j++){
			printf("\n hello");
			if(j>5)continue;
			printf("\n hello again");
		}
	}
}

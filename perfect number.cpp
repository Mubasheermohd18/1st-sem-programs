#include<stdio.h>
int main(){
	int num,i,sum=0;
	printf("\n enter a number:");
	scanf("%d",&num);
	for(i=1;i<=num/2;i++){
		if(num%i==0){
		
		sum+=i;	
	}
}
	if(sum==num){
		printf("\n %d is a perfect number",num);
	}
	else{
		printf("\n %d is not a perfect number",num);
	}
	return 0;
}

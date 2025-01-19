#include<stdio.h>
int main(void){
	int x[100];
	int n,i,key;
	printf("\n enter how many numbers:");
	scanf("%d",&n);
	printf("\nenter %d numbers :",n);
		for(i=0;i<n;i++){
		scanf("%d",&x[i]);
		}
	printf("\nplease enter the key:");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(key==x[i]){
			printf("\n %d was found at position %d",key,(i+1));
		return 0;
		}
	}
		
		printf("\n sorry %d did not found",key);
}

	


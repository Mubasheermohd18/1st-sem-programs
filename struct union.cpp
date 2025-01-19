#include<stdio.h>
union id{
	long int aadhar_no;
	char pan_no[10];
	long int voter_id;
	
};
main(){
	
	union id x;
	scanf("%ld",&x.aadhar_no);
	scanf("%s",&x.pan_no);
	scanf("%ld",&x.voter_id);
	printf("\n %ld",x.voter_id);
}

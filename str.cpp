#include<stdio.h>
#include<string.h>
int main(void){
	char str1[1000],str2[1000];
	int l,i,j;
	printf("\nenter a word:");
	gets(str1);
 	l=strlen(str1);
    j=l-1;
    for(i = 0; i < l; i++){
        str2[j--] = str1[i];
    }
    printf("\n%s",str2);
    str2[l]='\0';
    if (strcmp(str1, str2) == 0) {
        printf("\nPalindrome\n");
    } else {
        printf("\nNot a palindrome\n");
    }
    printf("\n%d",strlen(str1));
}


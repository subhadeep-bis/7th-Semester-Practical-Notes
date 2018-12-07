#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	char s[100];
	gets(s);
	int i=0, j=0, k=0, dom=0, flag=0;
	int l = strlen(s);
	while(s[i]!='@' && i<l) {
		if(s[i]>=97 && s[i]<=122 || s[i]>=48 && s[i]<=57 || s[i]=='_') {
			if(k>10){
				printf("Id too long!");
				flag=1;
				exit(1);
			} else {
				k++;
				i++;
			}
		} else {
			printf("Invalid Id!");
			flag=1;
			exit(1);
		}
	}
	i++;
	while(s[i]!='.' && i<l) {
		if(s[i]>=97 && s[i]<=122 || s[i]>=48 && s[i]<=57) {
			if(j>10){
				printf("Domain name too long!");
				flag=1;
				exit(1);
			} else {
				k++;
				i++;
			}
		} else {
			printf("Invalid Id!");
			flag=1;
			exit(1);
		}
	}
	i++;
	while(s[i]!='\0' && i<l){
		if(s[i]>=97 && s[i]<=122 || s[i]>=48 && s[i]<=57 ) {
			if(dom>3){
				printf("Domain name too long!");
				flag=1;
				exit(1);
			} else {
				k++;
				i++;
			}
		} else {
			printf("Invalid Id!");
			flag=1;
			exit(1);
		}	
	}
	if(flag==0)
		printf("Valid email id!");
	return 0;
}

#include<string.h>
#include<stdio.h>

int main() {
	char s[100];
	printf("Enter Identifier:\n");
	gets(s);
	int flag=0;
	int i=1;
	if(s[0]>=65 && s[0]<=90 || s[0]>=97 && s[0]<=122 || s[0]=='_') {
		for(i=1;i<strlen(s);i++){
			if((s[i]>=65 && s[i]<=9) || (s[i]>=97 && s[i]<=122) || (s[i]=='_') || (s[i]>=48 && s[i]<=57)){
				flag=1;
				continue;
			}
			else {
				flag=0;
				break;
			}
		}
	}
	if(flag==0)
		printf("Invalid");
	else
		printf("Valid");
	return 0;
}

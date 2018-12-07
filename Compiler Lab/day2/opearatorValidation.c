#include<stdio.h>
#include<string.h>

int main() {
	char s[20];
	gets(s);
	int i;
	for(i=0;i<strlen(s);i++) {
		if(s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='%' || s[i]=='*') {
			if((s[i-1]>=65 && s[i-1]<=90 || s[i-1]>=97 && s[i-1]<=122 || s[i-1]>=48 && s[i-1]<=57) && (s[i+1]>=65 && s[i+1]<=90 || s[i+1]>=97 && s[i+1]<=122 || s[i+1]>=48 && s[i+1]<=57)) {
				printf("\n%c operator is valid",s[i]);
			} else {
				printf("\n%c opeartor is not valid",s[i]);
			}
		}
	}
	return 0;
}

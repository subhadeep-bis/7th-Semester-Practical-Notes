#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char s[100];
	gets(s);
	int i=0;
	while(s[i]!='\0') {
		if(s[i]=='c'){
			s[i]='m';
			break;
		}
		i++;
	}
	while(s[i]!='\0'){
		if(s[i]==','){
			s[i]='*';
			break;
		}
		i++;
	}
	puts(s);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char s[100];
	gets(s);
	int i=0;
	while(s[i]!='\0') {
		if(s[i]=='\\' && s[i+1]=='n'){
			printf("\n");
			i++;
		} else if (s[i]=='\\' && s[i+1]=='b'){
			printf("\b");
			i++;
		} else if (s[i]=='\\' && s[i+1]=='t'){
			printf("\t");
			i++;
		} else
			printf("%c",s[i]);
		i++;
	}
	return 0;
}

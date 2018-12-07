#include<stdio.h>
#include<string.h>

void strCpy(char *s, char *c){
	while(*s != '\0'){
		*c = *s;
		c++;
		s++;
	}
}

int main() {
	char s[100], c[100];
	gets(s);
	strCpy(s,c);
//	puts(s);
	puts(c);	
}

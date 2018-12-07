#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void strCat(char *s, char *c) {
	char *ptr = s + strlen(s);
	while(*c!='\0') {
		*ptr = *c;
		ptr++; c++;
	}
	*ptr = '\0';
}

int main() {
	char s[100], c[100];
	gets(s);
	gets(c);
	strCat(s,c);
	puts(s);
}

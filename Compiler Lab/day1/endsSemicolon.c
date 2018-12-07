#include<string.h>
#include<stdio.h>

int main() {
	char s[100];
	printf("Enter String:\n");
	gets(s);
	int l = strlen(s);
	if(s[l-1]==';')
		printf("yes");
	else
		printf("no");
	return 0;
}

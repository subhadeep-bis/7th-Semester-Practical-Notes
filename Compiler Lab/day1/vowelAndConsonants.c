#include<stdio.h>
#include<string.h>

int main() {
	char s[100];
	printf("Enter String:\n");
	gets(s);
	int i=0;
	printf("Vowels:\n")
;	for(i=0;i<strlen(s);i++) {
		if(s[i]=='a' || s[i]=='e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i]=='A' || s[i]=='E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
			printf("%c -> position = %d\n",s[i],i+1);
		}
	}
	printf("Consonants:\n");
	for(i=0;i<strlen(s);i++) {
		if(s[i]!='a' && s[i]!='e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i]!='A' && s[i]!='E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U'){
			printf("%c -> position = %d\n",s[i],i+1);
		}
	}
	return 0;
}

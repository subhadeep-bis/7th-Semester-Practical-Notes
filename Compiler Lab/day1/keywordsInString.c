#include<stdio.h>
#include<string.h>

int main() {
	char key[10][10] = {"int", "char", "double", "string", "new", "struct", "auto", "break", "else", "long"};
	char s[100], a[100][100];
	gets(s);
	int i,j=0,c=0;
	for(i=0;i<strlen(s);i++) {
		if(s[i]==' ' || s[i]=='\0'){
			a[c][j] = '\0';
			c++;j=0;
		} else {
			a[c][j] = s[i];
			j++;
		}
	}
//	for(i=0;i<=c;i++){
//		printf("%s\n",a[i]);
//	}
	printf("\nKeywords used:\n");
	for(i=0;i<=c;i++) {
		for(j=0;j<10;j++){
			if(strcmp(a[i],key[j])==0){
				printf("%s\n",a[i]);
			}
		}
	}
	return 0;
}

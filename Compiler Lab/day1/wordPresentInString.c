#include<stdio.h>
#include<string.h>

int main() {
	char s[100], t[100],a[100][100];
	printf("Enter a String:\n");
	gets(s);
	printf("Enter the word that needs to be searched:\n");
	gets(t);
	int i,j=0,c=0;
	for(i=0;i<strlen(s);i++) {
		if(s[i]==32 || s[i]=='\0'){
			a[c][j]='\0';
			c++;j=0;
		} else {
			a[c][j] = s[i];
			j++;
		}
	}
	int k=0;
	for(i=0;i<c;i++) {
		if(strcmp(a[i],t)==0){
//			k=1;
//			break;
			printf("found at position %d\n",i+1);
		}
	}
//	if(k==1)
//		printf("found at %d",i+1);
//	else 
//		printf("not there");
	return 0;
}

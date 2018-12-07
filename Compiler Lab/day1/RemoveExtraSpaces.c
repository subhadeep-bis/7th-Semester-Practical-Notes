#include<stdio.h>
#include<string.h>

int main() {
	char s[100];
	gets(s);
	int i=0,j=0;
	int n=strlen(s);
	while(i<n){
		if(s[i]==' ' && s[i+1]==' ') {
			for(j=i;j<n;j++){
				s[j]=s[j+1];
			}
			n--;
		} else 
		 i++;
	}
	puts(s);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char s[100];
	gets(s);
	int a;
	if(s[0]=='/'){
		if(s[1]=='/'){
			printf("\nIt is a comment.");
		} else if (s[1]=='*'){
			int i;
			for(i=2;i<strlen(s);i++){
				if(s[i]=='*' && s[i+1]=='/'){
					a=1;
					break;		
				} 
			}
			if(a==1)
				printf("It is a comment");
			else
				printf("It is not a comment");
		} else {
			printf("It is not a comment");	
		}
	} else {
		printf("Not a comment!");
	}
}

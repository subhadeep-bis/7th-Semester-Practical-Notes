#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool isConstant(char *s){
	while( *s!='\0' ) {
		if(!(*s >= 48 && *s<=57)) {
			return false;
		}	
		s++;
	}
	return true;
}

int main() {
	char s[20];
	gets(s);
	bool cons = isConstant(s);
	if(cons == true) {
		printf("It is a constant");
	} else 
		printf("It is not a constant");
	return 0;
}

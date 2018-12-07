#include<stdio.h>
#include<string.h>

int main() {
	char s[100];
	printf("Enter String:\n");
	gets(s);
	int l = strlen(s);
	int i;
	int a[3]; a[0]=0;a[1]=0;a[2]=0;
	for(i=0;i<l;i++){
		printf("%c\n",s[i]);
		if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122)
			a[0]++;
		else if(s[i]>=48 && s[i]<=57)
			a[1]++;
		else if(s[i]==32)
			a[2]++;	
	}
	printf("No of Characters: %d\n",a[0]);
	printf("No of Integers: %d\n",a[1]);
	printf("No of White spaces: %d\n",a[2]);
	return 0;
}

#include<stdio.h>
#include<string.h>

int isSubstring(char *s, char *c) {
    int m = strlen(c);
    int n = strlen(s);
    int i;
    for(i=0;i<=n-m;i++){
        int j;
        for(j=0;j<m;j++){
            if(s[i+j] != c[j])
                break;
        }
        if(j==m)
            return i;
    }
    return -1;
}

int main() {
    char s[100], c[100];
    printf("Enter String:\n");
    gets(s);
    printf("Enter Substring:\n");
    gets(c);
    int m = isSubstring(s,c);
    if(m==-1)
        printf("\nnot a substring");
    else {
        printf("\nIt is a substring");
        printf("\nStarting position = %d",m+1);
        printf("\nEnding position = %d",m+strlen(c));
    }
    return 0;
}


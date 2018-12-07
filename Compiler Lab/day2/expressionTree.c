#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node {
	char value;
	struct node *left,*right;
}ndptr;

ndptr *a[50];
int top=-1;

bool isOperator(char c){
	if(c=='+'||c=='-'||c=='/'||c=='*'||c=='^'||c=='=')
		return true;
	return false;
}

int push(ndptr *c){
	if(top>50){
		printf("\nOverflow");
		return -1;
	}
	top++;
	a[top]=c;
	return 1;
}

ndptr* pop() {
	if(top==-1) {
		printf("\nUnderflow");
		return NULL;
	}
	ndptr* c = a[top];
	top--;
	return c;
}

void inorder(ndptr *t) 
{ 
    if(t) 
    { 
        inorder(t->left); 
        printf("%c ", t->value); 
        inorder(t->right); 
    } 
} 

ndptr* newNode(char v) {
	ndptr *temp = (ndptr *)malloc(sizeof(ndptr));
	temp->left=NULL;
	temp->right=NULL;
	temp->value=v;
	return temp;
}

ndptr* constructTree(char postfix[]) {
	ndptr *t, *t1, *t2;
	int i;
	for(i=0;i<strlen(postfix);i++){
		if(!isOperator(postfix[i])){
			t = newNode(postfix[i]);
			push(t);
		} else {
			t=newNode(postfix[i]);
			t1=pop();
			t2=pop();
			t->right=t1;
			t->left=t2;
			push(t);
		}
	}
	t = pop();
	return t;
}

int main(){
	char postfix[] = "cab+=";
	ndptr* r = constructTree(postfix);
	printf("Infix expression is \n");
	inorder(r);
	return 0;
}

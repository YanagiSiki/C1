#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define M 8000
#include <string.h>
int main(){
    int priority[512]={};
	priority['^']=3;
	priority['*']=priority['/']=2;
	priority['+']=priority['-']=1;
	char str[M];
	gets(str);
	int sp=0;
	char stack[M]={};
	int top=0;
	int len= strlen(str);
	for(int i=0;i<len;i++){
		if(isdigit(str[i])||isalpha(str[i])){
			if(sp){
				putchar(' ');
				sp=0;
			}
			putchar(str[i]);
		}else if(str[i]==' '){
			sp=1;
		}else{
			switch(str[i]){
			case '(':
				stack[++top]=str[i];
				break;
			case ')':
				while(stack[top]!='('){
					printf(" %c",stack[top--]);
				}
				top--;
				break;
			default:
				while(priority[stack[top]]>=priority[str[i]]){
					printf(" %c",stack[top--]);
				}
				stack[++top]=str[i];
				break;
			}
			if(i)sp=1;
		}
	}
	while(top>0){
		printf(" %c",stack[top--]);
	}
	puts("");
}

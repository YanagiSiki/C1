#include<stdio.h>
int f (char c){
    int p;//p如果是英文則為1
    if(c>'9'||c<'0'&&c!=' ')p=1;
        else p=0;
    return p;
}
int main(){
    char c;
    int p=0,space=1;
    scanf("%c",&c);
    while(c!='.'){
        if(c!=' '){
            space=0;
            printf("%c",c);
            p+=f(c);
        }
        if(c==' '&&space==0){
            if(p>0)printf(" - identifier\n");//超過1的話就是英文
            else if(p==0)printf(" - number\n");//等於零的話就是數字
            space++;
            p=0;
        }
        scanf("%c",&c);
        if(c=='.')break;
    }
}

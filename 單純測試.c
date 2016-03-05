#include<stdio.h>
int f (char c){
    int p;
    if(c>'9'||c<'0'&&c!=' ')p=1;
        else if(c!=' ') p=0;
    return p;
}
int main(){
    char c;
    int p=0,space=1;
    scanf("%c",&c);
    while(1){
        if(c!=' '){
            space=0;
            printf("%c",c);
            p+=f(c);
        }
        if(c==' '&&space==0){
            if(p>1)printf(" - identifier\n");
            else  printf(" - number\n");
            space++;
            p=0;
        }
        scanf("%c",&c);
        if(c=='.')break;
    }
}

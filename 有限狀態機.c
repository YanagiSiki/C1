#include<stdio.h>
int f (char c){
    int p;//p�p�G�O�^��h��1
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
            if(p>0)printf(" - identifier\n");//�W�L1���ܴN�O�^��
            else if(p==0)printf(" - number\n");//����s���ܴN�O�Ʀr
            space++;
            p=0;
        }
        scanf("%c",&c);
        if(c=='.')break;
    }
}

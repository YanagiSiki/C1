#include<stdio.h>
int main(){
    int a,b,c,d,e,tmp;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    if(a>b){
        tmp=a;
        a=b;
        b=tmp;
    }
    if(a>c){
        tmp=a;
        a=c;
        c=tmp;
    }
    if(a>d){
        tmp=a;
        a=d;
        d=tmp;
    }
    if(a>e){
        tmp=a;
        a=e;
        e=tmp;
    }

    if(b>c){
        tmp=b;
        b=c;
        c=tmp;
    }
    if(b>d){
        tmp=b;
        b=d;
        d=tmp;
    }
    if(b>e){
        tmp=b;
        b=e;
        e=tmp;
    }

    if(c>d){
        tmp=c;
        c=d;
        d=tmp;
    }
    if(c>e){
        tmp=c;
        c=e;
        e=tmp;
    }

    if(d>e){
        tmp=d;
        d=e;
        e=tmp;
    }
//由小到大排序(學長教的)

    if((a/10==b/10&&a/10==c/10&&a/10==d/10)||(b/10==c/10&&b/10==d/10&&b/10==e/10)){
        printf("5\n");
    }
    else if((a/10==b/10&&a/10==c/10 && d/10==e/10)||(a/10==b/10 && c/10==d/10&&d/10==e/10)){
        printf("4\n");
    }
    else if((a/10==b/10&&a/10==c/10)||(c/10==d/10&&c/10==e/10)||(b/10==c/10&&b/10==d/10)){
        printf("3\n");
    }
    else if((a/10==b/10&&c/10==d/10)||(a/10==b/10&&d/10==e/10)||(b/10==c/10&&d/10==e/10)){
        printf("2\n");
    }
    else if((a/10==b/10)||(b/10==c/10)||(c/10==d/10)||(d/10==e/10)){
        printf("1\n");
    }
    else if((a%10==b%10&&a%10==c%10&&a%10==d%10&&a%10==e%10)&&((a+e)==2*c)){
        printf("7\n");
    }
    else if(a/10==b/10-1&&a/10==c/10-2&&a/10==d/10-3&&a/10==e/10-4){
        printf("6\n");
    }
    else printf("0\n");
}

#include<stdio.h>
int main(){
    int x,a,b,c,i=3;
    scanf("%d",&x);
    a=1;
    b=1;
    if(x==1||x==2)printf("%d\n",a);
    else{
    for(i=3;i<=x;i++){
       c=a+b;
       a=b;
       b=c;
    }
    printf("%d\n",c);
    }
}

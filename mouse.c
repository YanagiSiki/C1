#include<stdio.h>
int main(){
    int a=0,b=1,n,x,y;
    scanf("%d",&n);
    while(n>0){
        x=a+b;
        y=a+1;
        a=x;
        b=y;
        n--;
    }
    printf("%d %d\n",a,b);
}

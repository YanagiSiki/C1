#include<stdio.h>
int f(int x){
    int y,power,n;
    n=x;power=1;
    while(n>0){
        n/=10;
        power*=10;
    }//有幾位數
    y=0;power/=10;
    while(x>0){
        y+=x%10*power;
       power/=10;
        x/=10;
    }//開始加
return y;
}

int main(){
    int x,y,tsz=0;
    scanf("%d",&x);
    printf("Original number was %d\n",x);
    y=f(x);
    while(x!=y){
        tsz++;
        printf("[%d]%d+%d=%d\n",tsz,x,y,x+y);
        x+=y;
        y=f(x);
    }
    printf("Loop times %d\n",tsz);
}


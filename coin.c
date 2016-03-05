#include<stdio.h>
int f(int x,int y,int change){
    int n=0;
    if(change%y>0){
        change-=change%y;
        n=1;
    }

    return n;
}
int main(){
    int total,choose,goods,change,a=1,n=0;
    scanf("%d,%d,%d",&total,&choose,&goods);
    if(choose==1)change=total-17*goods;
    else change=total-25*goods;

    n+=f(1,5,change);
    n+=f(5,10,change);
    n+=f(10,50,change);
    n+=f(50,100,change);
    n--;
    //printf("%d",n);

    if(change%5>0){
        printf("Coin %d",1);
        if(a==1)printf(" ");
        printf(": %d",change%5/1);
        change-=change%5;
        if(n<3&&change!=0)printf(" ");
        if(change!=0)printf(", ");
        if(a==3&&change!=0)printf("\n");
        a++;
    }
        if(change%10>0){
        printf("Coin %d",5);
        if(a==1)printf(" ");
        printf(": %d",change%10/5);
        change-=change%10;
        if(n<3&&change!=0)printf(" ");
        if(change!=0)printf(", ");
        if(a==3&&change!=0)printf("\n");
        a++;
    }
        if(change%50>0){
        printf("Coin %d",10);
        if(a==1)printf(" ");
        printf(": %d",change%50/10);
        change-=change%50;
        if(n<3&&change!=0&&n!=1)printf(" ");
        if(change!=0)printf(", ");
        if(a==3&&change!=0)printf("\n");
        a++;
    }
        if(change%100>0){
        printf("Coin %d",50);
        printf(": %d",change/50);
        change=0;
        a++;
    }
        printf("\n");


}



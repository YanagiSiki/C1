#include<stdio.h>
int s(int a,int x,char o,char p,char q){
    int i=a/x;
    if(4>i&&i>0){
        for(i=a/x;4>i&&i>0;i--){
            printf("%c",o);
        }
        return a%x;
    }

    else if(i<=5&&i>3){
        for(i=a/x;i<5;i++){
            printf("%c",o);
        }
        printf("%c",p);
        return a%x;
    }

     else if(i>5&&i<9){
        printf("%c",p);
        for(i=a/x;i>5;i--){
            printf("%c",o);
        }
        return a%x;
     }

     else if(i>8&&i<10){
        for(i=a/x;i>7&&i<10;i++){
            printf("%c",o);
        }
        printf("%c",q);
        return a%x;
     }
     return a;
}

int main(){
    int a;
    scanf("%d",&a);
    while(a!=-1&&a<5000&&a>=1){
        a=s(a,1000,'m','0','0');
        a=s(a,100,'c','d','m');
        a=s(a,10,'x','l','c');
        a=s(a,1,'i','v','x');
        printf("\n");
        scanf("%d",&a);
    }
    if(a==-1){
        return 0;
    }

}

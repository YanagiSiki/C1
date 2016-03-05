#include<stdio.h>
#include<math.h>
int main(){
    int n,i=2,j,a,x=0,y=0;
    scanf("%d",&n);
    while(1){
        y=pow(2,i)-1,j=2,a=0;
        while(y>j){
            if(y%j==0){
                a=1;break;
            }
            j++;
        }
        if(a==0){
            x=pow(2,i-1)*(pow(2,i)-1);
            if(x>n){
                printf("is perfect number\n");
                return n;
            }
            printf("%d ",x);
        }
        i++;
    }
}


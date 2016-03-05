#include<stdio.h>
int main(){
    int x,y,sum,i,j;
    scanf("%d",&y);
    while(y>0){
        scanf("%d",&x);
        while(x>=10){
            sum=0;
            while(x>0){
                sum=sum+(x%10);
                x=x/10;
            }
            x=sum;
        }
        if(sum==2){
        printf("%d, Yes\n",sum);
        }else printf("%d, No\n",sum);
        y--;
    }
return 0;
}

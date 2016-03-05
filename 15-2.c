#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define M 10005
int main(){
    int q[M],front,rear;
    int n,wh,target;
    front=rear=0;
    scanf("%d",&n);
    while(~scanf("%d",&wh)){
        if(wh==1){
            scanf("%d",&target);
            if((rear+1)%n==front){
                puts("FULL");
            }else{
                q[rear]=target;
                rear=(rear+1)%n;
            }
        }else if(wh==0){
            if(rear==front){
                puts("EMPTY");
            }else{
                printf("%d\n",q[front]);
                front=(front+1)%n;
            }

        }else break;
    }
    return 0;
}

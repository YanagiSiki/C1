#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define M 10005
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int main(){
    int p[M];
    int n=0,i,j;
    char c;
    int dec=0,flag;
    while(~scanf("%d%c",&p[n],&c)){
        n++;
        if(c=='\n')break;
    }
    scanf("%d",&dec);

    for(i=0;i<n;i++){
        flag=i;
        for(j=i+1;j<n;j++){
            if(p[flag]>p[j]&&!dec)flag=j;
            else if(p[flag]<p[j]&&dec)flag=j;
        }
        swap(&p[flag],&p[i]);
    }
    for(i=0;i<n-1;i++)printf("%d ",p[i]);
    printf("%d\n",p[n-1]);
    return 0;
}

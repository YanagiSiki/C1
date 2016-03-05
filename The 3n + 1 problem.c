#include<stdio.h>
int f (int i){
    int count=1;
    while(i!=1){
        if(i%2==1)i=3*i+1;
        else i=i/2;
        count++;
    }
    return count;
}
int main(){
    int n,m,tmp=0,last=0;
    int i;
    while(1){
        last=0;
        //scanf("%d %d",&n,&m);
        if(scanf("%d %d",&n,&m)==EOF)break;

        printf("%d %d",n,m);

        if(n>m){
            tmp=n;
            n=m;
            m=tmp;
        }

        for(i=n;i<=m;i++){
            if(last<f(i))last=f(i);
        }
        printf(" %d\n",last);
    }
}

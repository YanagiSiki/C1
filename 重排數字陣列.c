#include<stdio.h>
void bigsmall(int*p,int*q){
    int tmp;
    if((*p)<(*q)){
        tmp=*p;
        *p=*q;
        *q=tmp;
    }
}
int main(){
    int i,j,k=0,n;
    char c;
    int x[20];
    for(i=0;c!='\n';i++){
        scanf("%d%c",&x[i],&c);
        k++;
    }
    scanf("%d",&n);
    for(i=k;i>0;i--){
        for(j=0;j<i-1;j++){
            bigsmall(&x[j],&x[j+1]);
        }
    }
    if(n==1){
        for(i=0;i<k-1;i++)printf("%d ",x[i]);
        printf("%d",x[k-1]);
    }

    if(n==0){
        for(i=k-1;i>0;i--)printf("%d ",x[i]);
        printf("%d",x[0]);
    }
    printf("\n");
}


#include<stdio.h>
int main(){
    int h1,m1,h2,m2;
    int all,fee=0;
    char z1,z2;
    scanf("%d%c%d",&h1,&z1,&m1);
    scanf("%d%c%d",&h2,&z2,&m2);

    all=(h2-h1)*60+m2-m1;
    if(all>240){
        fee+=(all-240)/30*60;
        all=240;
    }
    if(all>120){
        fee+=(all-120)/30*40;
        all=120;
    }
    if(all<=120){
        fee+=all/30*30;
    }
    printf("%d\n",fee);
    return 0;
}

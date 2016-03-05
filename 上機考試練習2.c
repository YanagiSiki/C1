#include<stdio.h>
double getpre(double PI1,double PI2,double m){
    PI=PI*pow(10,m)
}

double getPI(double n){
    double i,PI=0;
    for(i=1;i<=n;i+=2){
        PI+=1/(i*i);
        printf("%1.10lf\n",PI);
    }
    for(i=2;i<=n;i+=2){
        PI-=1/((i)*(i));
        printf("%1.10lf\n",PI);
    }
    PI=sqrt(12*PI);
    printf("%1.10f\n",PI);
    return PI;
}
int main(){
    double n,m;
    while(scanf("%lf",&n)&&n>-1){
        PI1=getPI(n);
        PI2=getPI(n-1);
        scanf("%lf",&m);
        PI=getpre(PI1,PI2,m);
    }
}

#include<stdio.h>
#include <math.h>
double y(double choosef,double a,double x){
    double y;
    if(choosef==1) y=sqrt((a-x*x));
    if(choosef==2) y=(a*x*x*x+7*x)/sqrt(a+x);
    return y;
}
void f(double choosef,double a,double p,double q,double err){
    double i,n=1;
    double h,sum,last=0;
    while(1){
        h=(q-p)/n;
        sum=0;
        for(i=0;i<n;i++){
            sum=sum+(y(choosef,a,p+i*h)+y(choosef,a,p+(i+1)*h))*h/2;
        }
        if(fabs(sum-last)<pow(10,-err)) break;
        last=sum;
        n++;
    }
    printf("%.5lf\n",sum);
}
int main(){
    double choosef,a,p,q,err;
    while(1){
        scanf("%lf%*c",&choosef);
        if(choosef==0) break;
        scanf("%lf%*c%lf%*c%lf%*c%lf%*c",&a,&p,&q,&err);
        f(choosef,a,p,q,err);
        }
    return;

}

#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,d,e;
    double avr,var,st;
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);

    avr=(a+b+c+d+e)/5;
    var=(pow(a-avr,2)+pow(b-avr,2)+pow(c-avr,2)+pow(d-avr,2)+pow(e-avr,2))/5;
    st=pow(var,0.5);

    printf("平均值:%.2lf\n變異數:%.2lf\n標準差:%.2lf\n",avr,var,st);
    return 0;
}

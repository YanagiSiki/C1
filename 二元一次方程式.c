#include<stdio.h>
#include<math.h>
void f1(double x1,double x2,double y1,double y2){
    double m=(y2-y1)/(x2-x1);
    printf("m=(%.2lf-%.2lf)/(%.2lf-%.2lf)\n",y2,y1,x2,x1);
    if(x1==x2){
        printf("x=%.2lf\n",x1);
        return;
    }
    if(y1==y2){
        printf("y=%.2lf\n",y1);
        return;
    }
    if((y2-m*x2)>0)printf("y=%.2lfx+%.2lf\n",m,y2-m*x2);
    if((y2-m*x2)<0)printf("y=%.2lfx-%.2lf\n",m,fabs(y2-m*x2));
    if((y2-m*x2)==0)printf("y=%.2lfx\n",m);

}

void f2(double m,double x,double y){
    printf("y-%.2lf=%.2lf(x-%.2lf)\n",y,m,x);

    if((m*x-y)>0)printf("y=%.2lfx-%.2lf\n",m,m*x-y);
    if((m*x-y)<0)printf("y=%.2lfx+%.2lf\n",m,fabs(m*x-y));
    if((m*x-y)==0)printf("y=%.2lfx\n",m);


}

int main(){
    char yn;
    int n;
    while(1){
        scanf("%d%*c",&n);
        if(n==1){
            double x1,x2,y1,y2;
            scanf("%lf%*c%lf%*c%lf%*c%lf%*c",&x1,&y1,&x2,&y2);
            f1(x1,x2,y1,y2);

        }
        if(n==2){
            double m,y,x;
            scanf("%lf%*c%lf%*c%lf%*c",&m,&x,&y);
            f2(m,x,y);

        }
    scanf("%c%*c",&yn);
    if(yn=='N')break;
    }

}


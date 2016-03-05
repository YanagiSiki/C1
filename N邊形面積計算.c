#include<stdio.h>
#include<math.h>
int main (){
    int N,i;
    scanf("%d%*c",&N);
    double x[100000],y[100000],sum=0;
    for(i=0;i<N-1;i++){
        scanf("%lf%*c%lf%*c",&x[i],&y[i]);
        //printf("%lf,%lf\n",x[i],y[i]);
    }
    x[N-1]=x[0];
    y[N-1]=y[0];
    for(i=0;i<=N-2;i++)sum+=(x[i+1]+x[i])*(y[i+1]-y[i]);
    sum/=2;
    printf("%.1lf\n",fabs(sum));
    return N;
}

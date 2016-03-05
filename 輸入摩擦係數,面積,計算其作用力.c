#include<stdio.h>
int main(){
    double CD,A,V,F;
    scanf("%lf%lf",&CD,&A);
    printf("Velocity\tdrag coefficient\tArea\tForce(Newton)\n");
    for(V=0;V<=40;V=V+5){
        F=0.5*CD*A*1.23*V*V;
        printf("%8g\t%16g\t%4g\t%13g\n",V,CD,A,F);
    }
return 0;
}

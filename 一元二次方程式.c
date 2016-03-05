#include<math.h>
int main(){
    double a,b,c,x1,x2;
    
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    
	if(b*b-4*a*c>=0){
	x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
	}
		
	
    printf("%.1f\n",x1);
    printf("%.1f\n",x2);
    
    
    
    return 0;
}


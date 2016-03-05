#include <stdio.h>
#include<math.h>
int main(){
    double num1,num2,Sum,Difference,Product,Quotient;
    
    scanf("%lf",&num1);
    scanf("%lf",&num2);
    
    Sum=num1+num2;
    Difference=fabs(num1-num2);
    Product=num1*num2;
    Quotient=num1/num2;
    
    
    printf("Sum:%.2f\n",Sum);
    printf("Difference:%.2f\n",Difference);
    printf("Product:%.2f\n",Product);
	printf("Quotient:%.2f\n",Quotient);
	
	return 0;
}

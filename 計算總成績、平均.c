#include <stdio.h>
int main(){
    char Name;//�w�q�W�r�ܼ� 
    int ID;
	double CH,Program,Design,Total,Average;
	

    scanf("%c",&Name);//��J�W�r 
    
    scanf("%d",&ID);
    
    scanf("%lf",&CH);
   
    scanf("%lf",&Program);
    
    scanf("%lf",&Design);
    
    Total=CH+Program+Design;//�`���Z 
    Average=Total/3;//����
    
	
	printf("Name:%c\n",Name);
    printf("Id:%d\n",ID);
    printf("Total:%.0f\n",Total);
    printf("Average:%.0f\n",Average);
    return 0;
}


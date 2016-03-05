#include <stdio.h>
int main(){
    char Name;//定義名字變數 
    int ID;
	double CH,Program,Design,Total,Average;
	

    scanf("%c",&Name);//輸入名字 
    
    scanf("%d",&ID);
    
    scanf("%lf",&CH);
   
    scanf("%lf",&Program);
    
    scanf("%lf",&Design);
    
    Total=CH+Program+Design;//總成績 
    Average=Total/3;//平均
    
	
	printf("Name:%c\n",Name);
    printf("Id:%d\n",ID);
    printf("Total:%.0f\n",Total);
    printf("Average:%.0f\n",Average);
    return 0;
}


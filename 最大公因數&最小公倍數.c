#include <stdio.h>
int main(){
	int a,b,x,y,big,small;
	scanf("%d %d",&x,&y);
	a=x,b=y;
	while(x>0&&y>0){
		x=x%y;
		if(x==0){
		big=y;
		break;
		}	
		y=y%x;
		if(y==0){
		big=x;
		break;
		}		
	}
small=a*b/big;

	printf("%d\n",big);
	printf("%d\n",small);

} 

#include <stdio.h>
int main(){
	int a,b,c,i=0,j=0;
	
	scanf("%d%d",&a,&b);
	c=b;
	while(b>0){
	b=b/a;
	i++;
	}
	i=i-1;
	while(i>=0){
		b=c;
		j=0;
		while(j<i){
            b=b/a;
            j++;
        }
        b=b%a;
        if(b>=10)b=b-10+'A';
        else b+='0';
        printf("%c",b);
        i--;
	}
	printf("\n");
	
} 

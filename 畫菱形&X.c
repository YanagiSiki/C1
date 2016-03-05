#include <stdio.h>
int main(){
	int n,i=0,j=0,a=0,b=0;
	scanf("%d",&n);		
	if(n % 2==0){
		printf("n is not a odd number\n");
		}
		else if(n < 3){
			printf("n less than 3!\n");
			}
		else if(n > 25){
			printf("n greater than 25!\n");
			}
		else{
		while(i<n){   
			a=(n-1)/2-i;
			if(a<0){
				a=i-(n-1)/2;
			}
			b=n-2*a-2;
			while(a>0){
					printf(" ");
					a--;
				}
				if(a==0){			
					printf("*");
					a--;
					}
			while(b>0){
			
				printf(" ");
					b--;
				}
				if(b==0 && n-2*a-2!=0){			
					printf("*");
					b--;
					}
			printf("\n");
			i++;			 
			}	
					
printf("\n");

		while(j<n){  
			a=j;
			if(a>(n-1)/2){
				a=n-a-1;
			}		
			b=n-2*a-2;			
			while(a>0){
					printf(" ");
					a--;
				}
				if(a==0){			
					printf("*");
					a--;
					}	
			while(b>0){
					printf(" ");
					b--;
				}
				if(b==0){			
					printf("*");
					b--;
					}													
		printf("\n");	
		j++;
		}		
	} 		
	return n;					
}


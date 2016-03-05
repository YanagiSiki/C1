#include <stdio.h> 
int main(){
	int G,n,i=1,j,k;
	scanf("%d %d",&G,&n);
	if(G==1){
		while(i<=n){
			j=0;
			while(j<i){
				printf("*");
			j++;	
			}
		printf("\n");
		i++;
		}
		while((2*n-i)>0){
			j=i;
			while((2*n-j)>0){
				printf("*");
			j++;	
			}
		printf("\n");
		i++;	
		}
	}
	else if(G==2){
		while(i<=n){
			k=0;
			while(k<(n-i)){
				printf(" ");
				k++;
				}
			j=0;				
			while(j<i){
				printf("*");
				j++;				
			}
		printf("\n");
		i++;
		}
		while((2*n-i)>0){
			k=2*n-i-1;
			while((n-k)>1){
				printf(" ");
			k++;	
			}
			j=i;
			while((2*n-j)>0){
				printf("*");
			j++;	
			}
		printf("\n");
		i++;	
		}
	}
}

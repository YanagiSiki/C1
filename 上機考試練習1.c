#include <stdio.h>
void lin(int n){
    int i,j;

    for(i=1;i<=(n+1)/2;i++){
        for(j=(n+1)/2-i;j>0;j--){
            printf(" ");
        }
        for(j=i*2-1;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
}


void even(int n){
    int i,j;
    for(i=1;i<=n/2;i++){
        for(j=2*i;j>2;j-=2){
            printf("%d",j);
        }
        for(j=2;j<=2*i;j+=2){
            printf("%d",j);
    }
    printf("\n");
    }
}

void odd(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=1;j<(n-i)*2;j+=2){
            printf("%d",j);
        }
        printf("\n");
    }

}

int main(){
	int n,choose;

	while(1){
    scanf("%d %d",&choose,&n);
	switch(choose){
    case 0:return;

    case 1:
        lin(n);
        break;
    case 2:
        even(n+1);
        break;
    case 3:
        odd(n);
        break;
    default: printf("error");
	}
	}




return;
}

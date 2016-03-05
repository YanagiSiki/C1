#include<stdio.h>
int count(int num[],int suit[],int card[]){
    int  numkind[13]={0},i,pair=0,third=0,third_pair=0,four=0,straight=0,suitkind[13]={0},j;

//    memset(numkind,0,sizeof(numkind));
	for(i=0;i<13;i++){
       numkind[num[i]]++;
    }
    for(i=0;i<13;i++){   //pair
        if(numkind[i]==2){
            pair++;
        }
        if(numkind[i]==3){
            pair+=3;
        }
        if(numkind[i]==4){
            pair+=6;
        }
    }
    for(i=0;i<13;i++){     //third
        if(numkind[i]==3){
            third++;
        }
        if(numkind[i]==4){
            third+=4;
        }
    }
    for(i=0;i<=12;i++){     //third-pair
        if(numkind[i]==3){
            third_pair+=(pair-3);
        }
        if(numkind[i]==4){
            third_pair+=(pair-6)*4;
        }
    }
    for(i=0;i<=12;i++){     //flour
        if(numkind[i]==4){
            four+=9;
        }
    }
    for(i=0;i<=8;i++){
        straight+=numkind[i]*numkind[i+1]*numkind[i+2]*numkind[i+3]*numkind[i+4];
        if(numkind[i]*numkind[i+1]*numkind[i+2]*numkind[i+3]*numkind[i+4]>=1){
        	for(j=0;j<4;j++){
        		if(card[i+13*j]==1&&card[i+13*j+1]==1&&card[i+13*j+2]==1&&card[i+13*j+3]==1&&card[i+13*j+4]==1)
        		    straight++;
        	}
        }
    }
    straight+=numkind[9]*numkind[10]*numkind[11]*numkind[12]*numkind[0];
    for(j=0;j<4;j++){
        if(card[0+13*j]==1&&card[9+13*j]==1&&card[10+13*j]==1&&card[11+13*j]==1&&card[12+13*j]==1){
        	straight++;
        }
    }
    return straight+four+third+third_pair+pair;
}
int main(){
    int i,j,k,m,n,l;
    int suit[13],num[13],temp,card[52],countn=0;
    int fd[13];
    for(i=0;i<13;i++)scanf("%d",&fd[i]);

    for(i=0;i<13;i++){
        card[fd[i]]=1;
        suit[i]=fd[i]/13;
        num[i]=fd[i]%13;
    }
    printf("%d\n",count(num,suit,card)+13);

    return 0;
}

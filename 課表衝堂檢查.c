#include <stdio.h>
int compare1(int com1,int com2){
	int re1=0;
	if(com1==com2 && com1>0 && com2>0){
			re1=1;
	}
	
	return re1;	
	
}

int compare2(int com1,int com2){
	int re2=0;
	if(com1==com2 && com1>0 && com2>0){
			re2=1;
	}
	
	return re2;	
	
}

int compare3(int com1,int com2){
	int re3=0;
	if(com1==com2 && com1>0 && com2>0){
			re3=1;
	}
	return re3;	
	
}


int main(){
	int a,at,aa[3],b,bt,bb[3],c,ct,cc[3],i,j,re1=0,re2=0,re3=0;
	scanf("%d %d",&a,&at);
	for(i=1;i<=at;i++){
		scanf("%d",&aa[i]);
	}
	
	scanf("%d %d",&b,&bt);
	for(i=1;i<=bt;i++){
		scanf("%d",&bb[i]);
	}
	
	scanf("%d %d",&c,&ct);
	for(i=1;i<=ct;i++){
		scanf("%d",&cc[i]);
	}	
	
	
	
	
	
	for(i=1;i<=at;i++){
		for(j=1;j<=bt;j++){
		re1=re1+compare1(aa[i],bb[j]);
	} 
	}	
		if(re1>0){
		printf("time conflicts! %d and %d\n",a,b);	
		}
	
	for(i=1;i<=bt;i++){
		for(j=1;j<=ct;j++){
		re2=re2+compare2(bb[i],cc[j]);
	} 
	}	
		if(re2>0){
		printf("time conflicts! %d and %d\n",b,c);	
		}
		
	for(i=1;i<=at;i++){
		for(j=1;j<=ct;j++){
		re3=re3+compare3(aa[i],cc[j]);
	} 
	}
		if(re3>0){
		printf("time conflicts! %d and %d\n",a,c);	
		}	
	if((re1+re2+re3)==0){ 
	printf("no time conflicts!\n");
	}

return 0;
}
	


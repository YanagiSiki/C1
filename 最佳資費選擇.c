#include <stdio.h>
double complan183(double Intracall,double Extracall,double localcall,double IntraSMS,double ExtraSMS){
	double plan183;
    plan183=Intracall*0.08*60+Extracall*0.1393*60+localcall*0.1349*60+IntraSMS*1.1287+ExtraSMS*1.4803;
	return plan183;
}
double complan383(double Intracall,double Extracall,double localcall,double IntraSMS,double ExtraSMS){
	double plan383;
    plan383=Intracall*0.07*60+Extracall*0.1304*60+localcall*0.1217*60+IntraSMS*1.1287+ExtraSMS*1.4803;
	if(plan383<383){
    	plan383=383;
    }
	return plan383;
}
double complan583(double Intracall,double Extracall,double localcall,double IntraSMS,double ExtraSMS){
	double plan583;
    plan583=Intracall*0.06*60+Extracall*0.1087*60+localcall*0.1018*60+IntraSMS*1.1287+ExtraSMS*1.4803;
	if(plan583<583){
   		plan583=583;
    }return plan583;
}
double complan983(double Intracall,double Extracall,double localcall,double IntraSMS,double ExtraSMS){
	double plan983;
    plan983=Intracall*0.04*60+Extracall*0.1*60+localcall*0.0869*60+IntraSMS*1.1287+ExtraSMS*1.4803;
	if(plan983<983){
    	plan983=983;
    }
	return plan983;
}
double complan1683(double Intracall,double Extracall,double localcall,double IntraSMS,double ExtraSMS){
	double plan1683;
    plan1683=Intracall*0.03*60+Extracall*0.0914*60+localcall*0.0782*60+IntraSMS*1.1287+ExtraSMS*1.4803;
	if(plan1683<1683){
    	plan1683=1683;
    }
	return plan1683;
}

void printfcost(double plan183,double plan383,double plan583,double plan983,double plan1683){
	int x;
	double y;
	
	if(plan183<plan383){
	x=183;y=plan183;}else{x=383;y=plan383;}	

	if(y<plan583){				
	x=x;y=y;
	}else{x=583;y=plan583;}

	if(y<plan983){				
	x=x;y=y;
	}else{x=983;y=plan983;}

	if(y<plan1683){				
	x=x;y=y;
	}else{x=1683;y=plan1683;}
	
	printf("the best fee is plan%d, cost:%.0lf\n",x,y);
}

int main(){
	double Intracall,Extracall,localcall,IntraSMS,ExtraSMS;
	double plan183,plan383,plan583,plan983,plan1683;
	scanf("%lf %lf %lf %lf %lf",&Intracall,&Extracall,&localcall,&IntraSMS,&ExtraSMS);
	
	plan183=complan183(Intracall,Extracall,localcall,IntraSMS,ExtraSMS);
	plan383=complan383(Intracall,Extracall,localcall,IntraSMS,ExtraSMS);
	plan583=complan583(Intracall,Extracall,localcall,IntraSMS,ExtraSMS);
	plan983=complan983(Intracall,Extracall,localcall,IntraSMS,ExtraSMS);
	plan1683=complan1683(Intracall,Extracall,localcall,IntraSMS,ExtraSMS);
	printfcost(plan183,plan383,plan583,plan983,plan1683);
	
    return 0;
}

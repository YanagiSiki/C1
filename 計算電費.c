#include <stdio.h>
double computerate1(double,double);
double computerate2(double,double);
void printrate1(double,double);
int main(){
double rate1,rate2;
double doo,doo2;
	scanf("%lf",&doo);
	doo2=doo;
	rate1=computerate1(doo,0);
	rate2=computerate2(doo2,0);
	printrate1(rate1,rate2);
return 0;
}
double computerate1(double doo,double rate1){
	if(doo>=701){
		rate1=rate1+(doo-700)*5.63;
		doo=700;
	}
	if (501<=doo & doo<=700){
		rate1=rate1+(doo-500)*4.97;
		doo=500;
	}
	if (331<=doo & doo<=500){
		rate1=rate1+(doo-330)*4.39;
		doo=330;
	}
	if (121<=doo & doo<=330){
		rate1=rate1+(doo-120)*3.02;
		doo=120;
	}
	if (doo<=120){
		rate1=rate1+doo*2.10;

	}
	return rate1;
}
double computerate2(double doo2,double rate2){
	if(doo2>=701){
		rate2=rate2+(doo2-700)*4.50;
		doo2=700;
	}
	if (501<=doo2 & doo2<=700){
		rate2=rate2+(doo2-500)*4.01;
		doo2=500;
	}
	if (331<=doo2 & doo2<=500){
		rate2=rate2+(doo2-330)*3.61;
		doo2=330;
	}
	if (121<=doo2 & doo2<=330){
		rate2=rate2+(doo2-120)*2.68;
		doo2=120;
	}
	if (doo2<=120){
		rate2=rate2+doo2*2.10;
	}
	return rate2;
}
void printrate1(double rate1,double rate2){
	printf("Summer months:%6.2lf\n",rate1);
	printf("Non-Summer months:%6.2lf\n",rate2);
return;
}


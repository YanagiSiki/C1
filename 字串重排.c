#include<stdio.h>
int main(){
    int i=0;
    char ch;
    while(1){
        while(ch!=EOF){
            ch=getchar();
            if(ch=='1')printf("1");
            if(ch=='0')i++;
            if(ch=='\n')break;
        }
        while(i>0){
            printf("0");
            i--;
        }
        if(ch==EOF)break;
        printf("\n");
    }
    return 0;
}

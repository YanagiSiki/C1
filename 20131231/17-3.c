#include <stdio.h>
#include <stdlib.h>
int row(int sodoku[9][9],int x){
    int i,j,temp=10;
    for(i=0;i<9;i++){
        for(j=i+1;j<9;j++){
            if(sodoku[x][i]!=0 && sodoku[x][i]==sodoku[x][j]){
               if(sodoku[x][i]<temp) temp=sodoku[x][i];
            }
        }
    }
    if (temp==10) return -1;
    return temp;
}
int col(int sodoku[9][9],int y){
    int i,j,temp=10;
    for(i=0;i<9;i++){
        for(j=i+1;j<9;j++){
           if(sodoku[i][y]!=0 && sodoku[i][y]==sodoku[j][y]){
              if(sodoku[i][y]<temp) temp=sodoku[i][y];
           }
        }

    }
    if (temp==10) return -1;
    return temp;
}
int block(int sodoku[9][9],int x,int y){
    int i,j,temp=10;
    for(i=0;i<9;i++){
        for(j=i+1;j<9;j++){
            if(sodoku[i/3+x][i%3+y]!=0&&sodoku[i/3+x][i%3+y]==sodoku[j/3+x][j%3+y]){
                if(sodoku[i/3+x][i%3+y]<temp) temp=sodoku[i/3+x][i%3+y];
            }
        }
    }
    if (temp==10) return -1;
    return temp;
}


int main()
{
    int sodoku[9][9],i,j,r,c,b,count=1;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            scanf("%1d",&sodoku[i][j]);
        }
    }
    for(i=0;i<9;i++){                           //§PÂ_¦æ
        r=row(sodoku,i);
        if (r!=-1) {
            printf("row%d #%d\n",i+1,r);
            count=0;
        }
    }
    for(i=0;i<9;i++){                          //§PÂ_¦C
        c=col(sodoku,i);
        if (c!=-1){
            printf("colume%d #%d\n",i+1,c);
            count=0;
        }
    }
    for(i=0;i<9;i+=3){                          //§PÂ_block
        for(j=0;j<9;j+=3){
            b=block(sodoku,i,j);
            if (b!=-1){
               printf("block%d #%d\n",i+j/3+1,b);
               count=0;
            }
        }
    }
    if(count==1) printf("true\n");

  system("PAUSE");
  return 0;
}

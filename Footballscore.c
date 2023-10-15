#include <stdio.h>
void main(){
    
    int footballScore = 24;
    int i;
    int j;
    int k;
    int l;
    int m;
    int carry;
    for(i=0;i <=footballScore/8; i++){
        for(j=0;j <=footballScore/7;j++){
            for(k=0;k<=footballScore/6;k++){
                for(l=0;l<=footballScore/3;l++){
                    for(m=0;m<=footballScore/3;m++){
                        if(8*i + 7*j + 6*k + 3*l + 2*m == footballScore){
                            printf("%d TD + 2pt, %dTD + FG, %d TD, %d 3pt FG, %d Safety\n",i,j,k,l,m);
                        }
                    }
                }
            }
        }
    }
}
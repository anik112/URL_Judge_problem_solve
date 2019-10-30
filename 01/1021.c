#include<stdio.h>

int main(){

    int notes[6];
    notes[0]=100;
    notes[1]=50;
    notes[2]=20;
    notes[3]=10;
    notes[4]=5;
    notes[5]=2;

    int coin[6];
    coin[0]=1;
    coin[1]=50;
    coin[2]=25;
    coin[3]=10;
    coin[4]=5;
    coin[5]=1;

    double total_amount;
    int i=0;
    scanf("%lf",&total_amount);
    int notesTemp=total_amount;
    int coinTemp=(total_amount-notesTemp)*100;

    if(total_amount>=0 && total_amount<=1000000.00){

        printf("NOTAS:\n");
        for(i=0;i<6;i++){
            int check=notesTemp/notes[i];
            if(check > 0){
                printf("%d nota(s) de R$ %d.00\n",check,notes[i]);
                notesTemp -= notes[i]*check;
            }else{
                printf("%d nota(s) de R$ %d.00\n",check,notes[i]);
            }
        }

        printf("MOEDAS:\n");
        if(notesTemp>0){
            printf("%d moeda(s) de R$ %d.00\n",(notesTemp/coin[0]),coin[0]);
        }else{
            printf("%d moeda(s) de R$ %d.00\n",(notesTemp/coin[0]),coin[0]);
        }
        for(i=1;i<6;i++){
            int checkCoin=coinTemp/coin[i];
            if(checkCoin>0){
                    if(coin[i]==5){
                        printf("%d moeda(s) de R$ 0.05\n",checkCoin);
                    }else if(coin[i]==1){
                        printf("%d moeda(s) de R$ 0.01\n",checkCoin);
                    }else{
                        printf("%d moeda(s) de R$ 0.%d\n",checkCoin,coin[i]);
                    }
                    coinTemp -= coin[i]*checkCoin;
            }else{
                if(coin[i]==5){
                    printf("%d moeda(s) de R$ 0.05\n",checkCoin);
                }else if(coin[i]==1){
                    printf("%d moeda(s) de R$ 0.01\n",checkCoin);
                }else{
                    printf("%d moeda(s) de R$ 0.%d\n",checkCoin,coin[i]);
                }
            }
        }

    }
    return 0;
}

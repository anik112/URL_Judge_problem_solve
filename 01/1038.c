#include<stdio.h>

struct lists{
    int code;
    float price;
};

int main(){

    struct lists sigList[5];

    sigList[0].code=1; sigList[0].price=4.00;
    sigList[1].code=2; sigList[1].price=4.50;
    sigList[2].code=3; sigList[2].price=5.00;
    sigList[3].code=4; sigList[3].price=2.00;
    sigList[4].code=5; sigList[4].price=1.50;

    int itemCode,qty;
    scanf("%d %d",&itemCode,&qty);
    int i;
    for(i=0;i<5;i++){
        if(sigList[i].code==itemCode){
            printf("Total: R$ %.2f\n",(sigList[i].price*qty));
            break;
        }
    }

    return 0;
}

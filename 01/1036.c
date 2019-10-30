#include<stdio.h>
#include<math.h>

int main(){

    float a,b,c,x1,x2;

    scanf("%f %f %f",&a,&b,&c);
    float ac=4*a*c;
    float inSqrValue=(pow(b,2)-ac);

    if((inSqrValue>0) && (a>0) && (b>0) && (c>0)){
        float sqrOfFormula=sqrt(inSqrValue);
        float a2=(2*a);
        float sumOfbAndSqr=(-b)+(sqrOfFormula);
        float subOfbAndSqr=(-b)-(sqrOfFormula);
        x1=sumOfbAndSqr/a2;
        x2=subOfbAndSqr/a2;
        printf("R1 = %.5f\n",x1);
        printf("R2 = %.5f\n",x2);
    }else{
        printf("Impossivel calcular\n");
    }

    return 0;
}

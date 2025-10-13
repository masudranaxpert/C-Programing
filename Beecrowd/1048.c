#include <stdio.h>
int main(){
    float a;
    scanf("%f",&a);
    if(a >= 0 && a <= 400){
        printf("Novo salario: %.2f\n",a*1.15);
        printf("Reajuste ganho: %.2f\n",a*0.15);
        printf("Em percentual: 15 %%\n");
    }
    else if(400 < a && a <= 800){
        printf("Novo salario: %.2f\n",a*1.12);
        printf("Reajuste ganho: %.2f\n",a*0.12);
        printf("Em percentual: 12 %%\n");
    }
    else if(800 < a && a <= 1200){
        printf("Novo salario: %.2f\n",a*1.10);
        printf("Reajuste ganho: %.2f\n",a*0.10);
        printf("Em percentual: 10 %%\n");
    }
    else if(1200 < a && a <= 2000){
        printf("Novo salario: %.2f\n",a*1.07);
        printf("Reajuste ganho: %.2f\n",a*0.07);
        printf("Em percentual: 7 %%\n");
    }
    else if(a > 2000){
        printf("Novo salario: %.2f\n",a*1.04);
        printf("Reajuste ganho: %.2f\n",a*0.04);
        printf("Em percentual: 4 %%\n");

    }


    return 0;
}
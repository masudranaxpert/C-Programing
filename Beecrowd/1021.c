#include <stdio.h>
#include <math.h>
int main(){
    int banknote[] = {100, 50, 20, 10, 5, 2};
    double bankcoin[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    double n;
    scanf("%lf",&n);

    int bankcoin_global = (int)(n);
    
    printf("NOTAS:\n"); // Banknote
    for(int i=0; i<6; i++){
        int count = bankcoin_global / banknote[i];
        printf("%d nota(s) de R$ %d.00\n",count,banknote[i]);
        bankcoin_global %= banknote[i];
    }


    printf("MOEDAS:\n"); // Bankcoin
    int temp = n;
    int bank_coin_int = round(((n - temp) + bankcoin_global) * 100);

    for(int i=0; i<6; i++){
        int count = bank_coin_int / (int)((bankcoin[i]*100));
        printf("%d moeda(s) de R$ %.2f\n",count,bankcoin[i]);
        bank_coin_int = bank_coin_int % (int)((bankcoin[i]*100));
    }
    return 0;
}
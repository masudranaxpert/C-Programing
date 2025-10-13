#include <stdio.h>
int main(){
    float product_price[] = {4.00, 4.50, 5.00, 2.00, 1.50};
    int x,y;
    scanf("%d %d", &x, &y);

    float total_price = product_price[x - 1] * y;

    printf("Total: R$ %.2f\n",total_price);
    
    return 0;
}
#include <stdio.h>
int main(){
    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);
    if(a+b>c && a+c>b && b+c>a ){
        float Perimetro = (a+b+c);
        printf("Perimetro = %.1f\n",Perimetro);
    }else{
        float area = (1.0/2)*(a+b)*c;
        printf("Area = %.1f\n",area);
    }
    return 0;
}
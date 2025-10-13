#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    float x[n],y[n];
    for(int i=0; i<n; i++){
        scanf("%f %f", &x[i], &y[i]);
    }
    for(int i=0; i<n; i++){
        if(y[i]==0){
            printf("divisao impossivel\n");
        }else{
            printf("%.1f\n", x[i]/y[i]);
        }
    }
    return 0;
}
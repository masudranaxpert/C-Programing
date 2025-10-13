#include <stdio.h>
int main(){
    double a,b;

    int i =0;
    double temp1=-1, temp2=-1;
    while (i!=1){
        if(temp1<0 || temp1>10){
            scanf("%lf", &temp1);
            if(temp1>=0 && temp1<=10){
                a = temp1;
                continue;
            }
            else {
            printf("nota invalida\n");
            continue;
            }
        }else if(temp2<0 || temp2>10){
            scanf("%lf", &temp2);
            if(temp2>=0 && temp2<=10){
                b = temp2;
                continue;
            }
            else {
            printf("nota invalida\n");
            continue;
            }
        }

        if(temp1>=0 && temp1<=10 && temp2>=0 && temp2<=10){
            printf("media = %.2f\n", (a+b)/2);
            printf("novo calculo (1-sim 2-nao)\n");
            int j=0;
            while(j!=1 && j!=2){
                scanf("%d", &j);
                if(j==1){
                    temp1=-1;
                    temp2=-1;
                    break;
                }else if(j==2){
                    break;
                }else{
                    printf("novo calculo (1-sim 2-nao)\n");
                    continue;
                }
            }
            if(j==2){
                break;
            }else{
                continue;
            }
        }
    }

    return 0;
}
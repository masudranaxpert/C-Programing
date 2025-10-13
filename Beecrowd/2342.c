#include <stdio.h>
int main(){
    int a,b,c;
    char ch;
    scanf("%d",&a);
    scanf("%d %c %d",&b,&ch,&c);

    if(ch=='+'){
        if(b+c==a){
            printf("OK\n");
        }
        else{
            printf("OVERFLOW\n");
        }
    }
    else if(ch=='*'){
        if(b*c==a){
            printf("OK\n");
        }
        else{
            printf("OVERFLOW\n");
        }
    }

    return 0;
}
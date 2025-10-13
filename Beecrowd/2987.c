#include <stdio.h>
int main(){
    char ch;
    int n=1;
    scanf("%c",&ch);

    for(char i='A';i<='Z';i++){
        if(i==ch){
            printf("%d\n",n);
            break;
        }
        n++;
    }
    return 0;
}
#include <stdio.h>
int main(){
    //10 Rows and 10 (max size)
    char str[10][100];

    int i = 0;  
    while(i<10){
        scanf(" %s",str[i]);
        i++;
    }

    printf("%s\n",str[2]);
    printf("%s\n",str[6]);
    printf("%s\n",str[8]);

    return 0;
}
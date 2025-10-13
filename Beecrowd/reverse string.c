#include <stdio.h>
int main(){
    
    //String Reverse without using strrev()

    char ch[20],temp[20];

    scanf("%s",ch);

    int len=0;
    while(ch[len] != '\0'){
        len++;
    }

    for(int i=0; i<len; i++){
        temp[i]=ch[len-i-1];
    }
    temp[len+1]='\0';

    for(int i=0; i<len; i++){
        printf("%c",temp[i]);
    }
    return 0;
}
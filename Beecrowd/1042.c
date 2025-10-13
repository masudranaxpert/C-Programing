#include <stdio.h>
int main(){
    
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int a_orgi = a,b_orgi=b,c_orgi=c;
    
    if(a>b){
       int temp = a;
       a = b;
       b = temp; //b = a
    }
    if(a>c){
        int temp = a;
        a = c;
        c = temp; //c = b
    }
    if(b>c){
        int temp = b;
        b = c;
        c = temp;
    }

    printf("%d\n%d\n%d\n\n",a,b,c);
    printf("%d\n%d\n%d\n",a_orgi,b_orgi,c_orgi);
    return 0;
}
#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    printf("A = %d, B = %d, C = %d\n",a,b,c);
    printf("A =       %d, B =         %d, C =\n",a,b);
    printf("       %d\n",c);
    printf("A = %010d, B = %010d, C =\n",a,b);
    printf("%010d\n",c);
    printf("A = %d      , B = %d        , C =\n",a,b);
    printf("%d\n",c);
    
    return 0;
}

    
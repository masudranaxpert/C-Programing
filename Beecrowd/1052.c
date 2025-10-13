#include <stdio.h>
int main(){
    int month;
    scanf("%d", &month);


    char *months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    printf("%s\n", months[month - 1]);

    return 0;
}
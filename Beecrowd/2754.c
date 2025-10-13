#include <stdio.h>
int main(){
    
    double a = 234.345, b = 45.698;
    printf("%.6lf - %.6lf\n",a,b);
    printf("%.0lf - %.0lf\n",a,b);
    printf("%.1lf - %.1lf\n",a,b);
    printf("%.2lf - %.2lf\n",a,b);
    printf("%.3lf - %.3lf\n",a,b);
    printf("%.6e - %.6e\n",a,b);
    printf("%.6E - %.6E\n",a,b);
    printf("%.3lf - %.3lf\n",a,b);
    printf("%.3lf - %.3lf\n",a,b);

    return 0;
}
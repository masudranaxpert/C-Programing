#include <stdio.h>
int main(){
    int n,a[5],b[5];
    float sum=0;    
    scanf("%d",&n);

    int i=0;
    while (i<n)
    {
        scanf("%d %d",&a[i],&b[i]);
        if(a[i]==1001){
            sum+=b[i]*1.50;
        }
        else if(a[i]==1002){
            sum+=b[i]*2.50;
        }
        else if(a[i]==1003){
            sum+=b[i]*3.50;
        }
        else if(a[i]==1004){
            sum+=b[i]*4.50;
        }
        else if(a[i]==1005){
            sum+=b[i]*5.50;
        }
        i++;
    }
    
    printf("%.2f\n",sum);



    return 0;
}
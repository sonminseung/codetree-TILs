#include <stdio.h>

int main() {
    double sum=0;
    double n;
    int count=0;
    while(1)
    {
        scanf("%lf\n", &n);
        if((n>=20) && (n<30))
        {
            sum+=n;
            count++;
        }
        else
        {
            break;
        }
    }
    printf("%.2lf",(sum/count));
    return 0;
}
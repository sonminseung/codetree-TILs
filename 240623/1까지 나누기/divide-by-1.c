#include <stdio.h>

int main() {
    double n;
    int cnt=0;

    scanf("%lf" ,&n);
    double div=n;
    for(double i=1; i<=n; i++)
    {
        if(div<=1)
        {
            break;
        }
        else 
        {
            div=div/i;
            cnt+=1;
        }
    }
    printf("%d",cnt);
    return 0;
}
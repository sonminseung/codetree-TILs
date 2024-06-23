#include <stdio.h>

int main() {
    double n;
    int cnt=0;
    int i=1;

    scanf("%lf" ,&n);
    double div=n;
    while(1)
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
        i++;
    }
    printf("%d",cnt);
    return 0;
}
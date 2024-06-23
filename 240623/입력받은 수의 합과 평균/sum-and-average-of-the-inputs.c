#include <stdio.h>

int main() {
    int n;
    double sum=0;
    double avg, a;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%lf",&a);
        sum+=a;
    }
    avg=sum/n;
    printf("%.0lf %.1lf",sum ,avg);

    return 0;
}
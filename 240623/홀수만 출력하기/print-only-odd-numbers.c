#include <stdio.h>

int main() {
    int n;
    int a;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d\n",&a);
        if((a%2==1) && (a%3==0))
        {
            printf("%d\n",a);
        }
    }
    return 0;
}
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        if((i%2==0) && (i%4!=0))
        {
            continue;
        }
        else if((i/8)%2==0)
        {
            continue;
        }
        else if((i%7)<4)
        {
            continue;
        }
        else
        {
            printf("%d ", i);
        }
    }
    return 0;
}
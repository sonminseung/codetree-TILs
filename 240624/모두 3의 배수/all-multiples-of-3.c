#include <stdio.h>

int main() {
    int n;
    for(int i=1; i<=5; i++)
    {
        scanf("%d\n", &n);
        if(n%3==0)
        {
            printf("1");
            break;
        }
        if(i==5)
        {
            printf("0");
        }
    }
    return 0;
}
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=n; i>=1; i--)
    {
        for(int k=1; k<=n-i; k++)
        {
            printf("  ");
        }
        for(int j=1; j<=2*i-1; j++)
        {
            printf("* ");
        }
        for(int k=1; k<=n-i; k++)
        {
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}
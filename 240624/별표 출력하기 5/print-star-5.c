#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        for(int k=n; k>=i; k--)
        {
        
            for(int j=n; j>=i; j--)
            {
                printf("*");
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
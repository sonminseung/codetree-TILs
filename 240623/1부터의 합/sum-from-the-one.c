#include <stdio.h>

int main() {
    int n;
    int sum=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        if(sum+i>n)
        {
            break;
        }
        else
        {
            sum+=i;
        }
    }
    printf("%d", sum);
    return 0;
}
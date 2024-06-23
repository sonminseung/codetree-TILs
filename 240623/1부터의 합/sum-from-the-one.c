#include <stdio.h>

int main() {
    int n;
    int sum=0;
    int cnt;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        if(sum+i>n)
        {
            cnt=i;
            break;
        }
        else
        {
            sum+=i;
        }
    }
    printf("%d", cnt);
    return 0;
}
#include <stdio.h>

int main() {
    int n;
    int cnt=0;
    scanf("%d", &n);
     while(1)
    {
        if(n==1)
        {
            break;
        }
        else
        {
        if(n%2==0)
        {
            n=n/2;
            cnt++;
        }
        else
        {
            n=n*3+1;
            cnt++;
        }
        }
    }
    printf("%d",cnt);
    return 0;
}
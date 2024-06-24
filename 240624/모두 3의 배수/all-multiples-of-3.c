#include <stdio.h>

int main() {
    int n;
    int count=0;
    for(int i=1; i<=5; i++)
    {
        scanf("%d\n", &n);
        if(n%3==0)
        {
            count++;
        }
    }
    if(count==5)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}
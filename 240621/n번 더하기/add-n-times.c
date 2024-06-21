#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    int cnt=a;
    int i=0;
    while(i<=cnt)
    {
        a+=b;
        printf("%d\n",a);
        i++;
    }
    return 0;
}
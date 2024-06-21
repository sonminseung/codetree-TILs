#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    int i=0;
    int result=a;
    while(i<b)
    {
        result+=b;
        printf("%d\n", result);
        i++;
    }
    return 0;
}
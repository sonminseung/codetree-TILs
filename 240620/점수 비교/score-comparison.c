#include <stdio.h>

int main() {
    int a1,b1, a2,b2;
    scanf("%d %d", &a1, &b1);
    scanf("%d %d", &a2, &b2);
    if (a1>a2 && b1>b2)
    printf("1");
    else
    printf("0");
    return 0;
}
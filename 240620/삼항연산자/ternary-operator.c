#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    a = a==100? 0: 1;
    if (a==0)
    printf("pass");
    else
    printf("failure");
    return 0;
}
#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d" ,&a,&b);
    a= a<b ? b : a;
    printf("%d",a);
    return 0;
}
#include <stdio.h>

int main() {
    int a,b;
    double c,d;
    scanf("%d %d",&a,&b);
    c=(double)a+b;
    d=(double)a-b;
    printf("%.2lf",c/d);
    // 여기에 코드를 작성해주세요.
    return 0;
}
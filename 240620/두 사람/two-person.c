#include <stdio.h>

int main() {
    int a,b;
    char a1,b1;
    scanf("%d %c\n", &a,&a1);
    scanf("%d %c", &b,&b1);
    if ((a>=19 && a1=='M') || (b>=19 && b1=='W'))
    printf("1");
    else
    printf("0");

    // 여기에 코드를 작성해주세요.
    return 0;
}
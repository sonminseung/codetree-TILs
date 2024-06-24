#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    for(int i=a; i<=b ; i++)
    {

    if((1920%i==0 && 2880%i==0))
    {
        printf("1");
        break;
    }
    if(i==b)
    {
        printf("0");
        break;
    }  
    }
    return 0;
}
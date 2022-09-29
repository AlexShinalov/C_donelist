#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
    int fib(int x)
    {
        if (x <= 1)   return 1;
        else return fib(x - 1) + fib(x-2);
    }
int main(){
    long long y = 10;
    long long k = 10;
    //scanf("%d", &k);

    y = fib(k);
    printf(y);
    return 0;
}
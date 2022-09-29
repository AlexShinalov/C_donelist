#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//задание 2 числа Фибоначчи
int main(){
    long long y = 0;
    int k = 10;
    scanf("%d", &k);//ввод номера числа фибоначчи
    long long sum1 = 0;
    long long sum2 = 1;
    for(int i=1; i<=k; )


    {
        if(k==1){
            y=0;
        }
        else if(k==2){
            y=1;
        }
        else if (k>2&i>2){
            y = sum1+sum2;
            sum1=sum2;
            sum2=y;

        }
        i++;
    }
    printf("fib = %d\n", y);
    return 0;
}

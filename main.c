#include <stdio.h>
//задание 1
int main(){
    int k = 10;
    scanf("%d", &k);
    if(k%3==0 && k%5==0){
            printf("fizzbuzz");
    }
    else if (k%5==0) {
        printf("buzz");
    }
    else if (k%3==0) {
            printf("fizz");
    }

}

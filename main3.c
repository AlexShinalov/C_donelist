#include <stdio.h>

int main(void) {
//для див и для мод с остатком 5
    int k = 10;
    scanf("%d", &k);
    int i = 0;
    scanf("%d", &i);
    int z = 0;
    int c =0;
    int r = 0;
    while (k-i>=0) {
        z = k - i;
        r = i + i;
        k=k-i;
        c+=1;
    }
    if (z==1){
        z=5;
    }
    printf("div = %d\n", c);
    printf("mod = %d\n", z);
}

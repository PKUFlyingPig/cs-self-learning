#include <stdio.h>

int max(int a, int b) {
    return a>b ? a : b;
}

int main() {
    int x, y, maxval;

    int (*pmax)(int, int) = max;
    //函数指针

    printf("input two numbers:");
    scanf("%d %d", &x, &y);
    maxval = (*pmax)(x,y);
    printf("Max value: %d\n", maxval);


    return 0;
}
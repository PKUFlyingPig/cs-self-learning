#include <stdio.h>

int main() {
    //in c programming language, 2dim arrary is in row
    // ini
    //int a[5][3] = {{},{},{}} 分段赋值
    //int a[5][3] = {} 按行连续赋值
    //如果对全部元素赋值，第一维的长度可以不给出 如下
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    

    return 0;
}
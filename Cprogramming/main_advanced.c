#include <stdio.h>


int main(int argc, char *argv[]) {
    //argc表示传递的字符串的数目，argv是一个指针数组，每一个指针指向一个字符串

    int i;
    printf("The program receives %d parameters:\n", argc);
    for (i=0; i<argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}
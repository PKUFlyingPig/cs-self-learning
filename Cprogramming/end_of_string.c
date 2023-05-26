#include <stdio.h>
//局部变量的初始值不一定全是0

int main() {
    char str[30];
    char c;
    int i;
    for (c = 65, i = 0; c <= 90; c++, i++) {
        str[i] = c;
    }
    str[i] = 0; //也可以写作str[i] = '\0'手动结束字符串 
    //更专业的做法是 将str初始就全为0 str = {0};

    
    printf("%s\n", str);
    return 0;
}
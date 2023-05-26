#include <stdio.h>

int main() {
    char *lines[5]= {
        "COSC1283/1284",
        "Programming",
        "Techniques",
        "is",
        "great fun"
    };
    /**
     * 实际上上述的字符串数组等同于:
     * char *string0 = "C0SC1283/1284"
     * char *string1 = "Programming"
     * char *string2 = "Techniques"
     * char *string3 = "is"
     * char *string4 = "great fun"
     * 
     * char *lines[5];
     * lines[0] = string0;
     * lines[1] = string1;
     * ....
     * 
     *  char* lines[5] 定义了一个指针数组
    */

    char *str1 = lines[1];
    //attempt: str1存放着"COSC1283/1284"的首地址
    char *str2 = *(lines + 3);
    //att: str2存放着“is”的首地址
    char c1 = *(*(lines + 4) + 6);
    //att: c1 = 'f'
    char c2 = (*lines + 5)[5];
    //att: c2 = 
    char c3 = *lines[0] + 2;
    //att: c3 = 'C'

    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    printf(" c1=%c\n",c1);
    printf(" c2=%c\n",c2);
    printf(" c3=%c\n",c3);

    return 0;

}
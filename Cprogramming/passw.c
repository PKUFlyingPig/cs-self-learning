#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define PWDLEN 20

void getpwd(char *pwd, int pwdlen);

int main()
{
    char pwd[PWDLEN + 1];
    printf("Input password: ");
    getpwd(pwd, PWDLEN);
    system("stty echo");
    printf("The password is: %s\n", pwd);
    
    return 0;
}

/**
 * get the password by users
 * @param pwd char* 保存密码的内存的首地址
 * @param pwdlen int 密码的最大长度
*/

void getpwd(char *pwd, int pwdlen) {
    char ch = 0;
    int i = 0;
    system("stty -echo");//取消回显
    while (i < pwdlen) { //循环输入密码
        ch = getchar(); 
        if (ch == '\n') { //unix敲入回车结束
            //printf("\n");
            break;
        }

        if (ch == '\b' && i > 0) {//删除键回退之后覆盖
            i--;
            //printf("\b \b");
        } else if (isprint(ch)) {
            pwd[i] = ch;
            //printf("*");
            i++;
        }
    }
    pwd[i] = 0; //最后结束
    printf("\n");
    //system("stty echo");
}
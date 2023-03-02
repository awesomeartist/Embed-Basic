#include <stdio.h>


int main(void)
{   /*
    全局变量数据段
    栈空间数据段
    常量数据段
    代码段
    */
    char *p1 = "hello world!\n";
    char buf[] = {"hello world!\n"};
    char *p2 = buf;

    //*p1 = 'a';                                //p指向常量，不可修改，否则出现段错误
    printf("the str is %s\n",p1);

    *p2 = 'a';                                  //p2指向变量可修改；或 p[0] = 'a';
    printf("the %s\n",buf);

    
    return 0;
}
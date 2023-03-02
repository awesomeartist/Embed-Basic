#include <stdio.h>


int main(void)
{
    int a;
    unsigned char *p1;
    p1 = (unsigned char*)main;
    printf("the &a is   %p\n",&a);
    printf("the main is %p\n",main);

    printf("the  *p1 is %p\n",*p1);
    *p1 = 0x12;                         //段错误
    printf("the *p1 is   %p\n",*p1);

    return 0;
}
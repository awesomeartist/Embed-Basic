#include "stdio.h"

int main(void)
{
    char a = -1;
    printf("a = %d\n", a);
    a>>=8;
    printf("a = %d\n", a);
    unsigned char b = -1;
    printf("b = %d\n", b);
    b>>=8;
    printf("b = %d\n", b);

    return 0;
}
//ouput:
//a = -1
//a = -1
//b = 255
//b = 0
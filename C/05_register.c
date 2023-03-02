#include <stdio.h>

int main(void)
{
    register int a;
    a = 0x10;
    //printf("the a is %d",a);
    printf("the a is %d",&a);//寄存器无法读取

    return 0;
}
//the a is 16
//error
#include <stdio.h>

int main()
{
    //作用域限制
    #ifdef     ABC    
               printf("====%s====\n", __FILE__);
    #endif

            printf("hello world!");

    return 0;
}
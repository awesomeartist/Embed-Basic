#include <stdio.h>

int fun()
{
    int a;

    printf("the %s,%s,%d\n",__FUNCTION__,__FILE__,__LINE__);

    return 0;
}

int main()
{
    fun();

    return 0;
}
#include <stdio.h>

#define  ABC(x)    #x
#define  DAY(x)    myday##x
int main()
{
    int myday1 = 10;
    int myday2 = 20;
    printf(ABC(ab\n));    //"ab\n"
    printf("the day is %d\n", DAY(1));

    return 0;
}
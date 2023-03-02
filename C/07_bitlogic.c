#include <stdio.h>

void swap(int* a,int* b);

int main(void)
 {
 int a = 10;
 int res;
 res = ((a == 10) || printf("========\n"));
 printf("the res is %d\n",res);
 return 0;
 }

//the res is 1
 //取a!=10时
 //=======
 //the res is 1

 void swap(int* a,int* b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
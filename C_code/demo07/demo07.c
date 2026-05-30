#include<stdio.h>
int main()
{

    int a = 21;
    int b = 10;
    int c;
    if (a == b)
        {
            printf("a 等于 b\n");
        }
        else
        {
            printf("a 不等于 b\n");
        }
        if (a < b)
        {
            printf("a 小于 b\n");
        }
        else
        {
            printf("a 不小于 b\n");
        }
        if (a > b)
        {
            printf("a 大于 b\n");
        }
        else
        {
            printf("a 不大于 b\n");
        }
        a = 5;
        b = 20;
        if ( a <= b)
        {
            printf("a 小于或等于 b\n");
        }
        if (b >= a)
        {
            printf("a 大于或等于 b\n");
        }
    return 0;    

}
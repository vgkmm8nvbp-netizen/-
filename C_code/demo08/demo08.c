#include <stdio.h>
int main()
{
    int a = 5;
    int b = 20;
    if ( a && b)
        {
            printf("a 和 b 都为真\n");
        }
    if (a||b)
        {
            printf("a 和 b 有一个为真\n");
        }
    a = 0;
    b = 10;
    if (a && b)
        {
            printf("条件为真\n");
        }    
    else
    {
        printf("条件为假\n");
    }                   
    if(!a);
    {
        printf("条件为真\n");
    }
    return 0;
}
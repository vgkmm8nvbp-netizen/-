#include <stdio.h>
int main()
{
    int a,b,c;
    a = 21;
    b = 10;
    c = a + b;
    printf("line 1 -c 的值是 %d\n",c);
    c = a - b;
    printf("line 2 - c 的值是 %d\n",c);
    c = a * b;
    printf("line 3 - c 的值是 %d\n",c);
    c = a / b;
    printf("line 4 - c 的值是 %d\n",c);
    c = a % b;
    printf("line 5 - c的值是 %d\n",c);
    
    return 0;
}
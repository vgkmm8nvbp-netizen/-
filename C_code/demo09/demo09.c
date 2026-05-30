#include <stdio.h>
int main()
{
int a[5] = {8,2,9,4,7};
int i,j,t;
for(i = 0;i < 5 - 1;i++)
{
    for(j = 0;j < 5 - 1 - i;j++)
    {
        if(a[j] < a[j + 1])
        {
            t = a[j];
            a[j] = a[j + 1];
            a[j + 1] = t;
        }
    }
}

return 0;
}
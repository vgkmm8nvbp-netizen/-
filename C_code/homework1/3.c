#include<stdio.h>
int main()
{
    int z = 6;
    int x = 6;
    for (int i = 0; i < z; i++)
    {
        for(int a = 0; a < x; a++)
        {
            printf("(%d,0,%d)",i,a);
        }
        printf("\n");
    }    

    return 0;
}
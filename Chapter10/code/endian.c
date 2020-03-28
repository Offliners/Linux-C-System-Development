#include<stdio.h>

int main()
{
        char *p;
        int a = 0x12345678;

        p = (char *)(&a);
        if(*p == 0x78 )
                printf("The little endian!\n");
        else
                printf("The big endian!\n");

        return 0;
}

#include<stdio.h>

int main()
{
        int num = 12;

        printf("num divide by 4 : %d\n", num >> 2);
        printf("num multiplied by 5 : %d\n", (num << 2) + num);

        return 0;
}

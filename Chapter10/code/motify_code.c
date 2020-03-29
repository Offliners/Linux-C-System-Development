#include<stdio.h>

int f(int, int);

int main()
{
        int (*p)(int, int);
        void *q;

        p = f;
        q = (void*)p;

        printf("The code is : 0x%x", *((int*)q));
        *((int*)q) = 0x12345678;

        return 0;
}

int f(int a, int b)
{
        return a + b;
}

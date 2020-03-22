#include<stdio.h>

int main()
{
        int a = 200;
        int *p = NULL;

        p = &a;
        if((p != NULL)||(*p ==100))
                printf("Hi\n");
        else
                printf("Hello\n");

        return 0;
}

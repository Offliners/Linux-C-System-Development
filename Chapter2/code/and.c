#include<stdio.h>

int main()
{
        int a = 200;
        int *p = NULL;

        p = &a;
        if((p != NULL)&&(*p ==100))
                printf("Hello\n");
        else
                printf("Hi\n");

        return 0;
}

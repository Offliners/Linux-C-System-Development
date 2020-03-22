#include<stdio.h>

int main()
{
        int a, b;

        scanf("%d %d", &a, &b);

        if(a > b)
                printf("a is higher than b\n");
        else if(a < b)
                printf("a is lower than b\n");
        else
                printf("a is equal b\n");

        return 0;
}

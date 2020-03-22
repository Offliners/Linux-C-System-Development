#include<stdio.h>

int main()
{
        int n;
        int fac = 1;
        int i;

        scanf("%d", &n);
        i = 1;
        while(i <= n)
        {
                fac *= i;
                i++;
        }

        printf("The result is %d\n", fac);

        return 0;
}

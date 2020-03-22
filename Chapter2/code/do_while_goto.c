#include<stdio.h>

int main()
{
        int n;
        int fac = 1;
        int i;

        scanf("%d",&n);

        i = 1;
        loop:
                fac *= i;
                i++;
                if(i <= n)
                        goto loop;

        printf("The result is %d\n", fac);

        return 0;
}

#include<stdio.h>

int main()
{
        int n;
        int fac = 1;
        int i;
        int t;

        scanf("%d", &n);
        i = 1;
        t = i <= n;
        if(t == 0)
                goto done;

        loop:
                fac *= i;
                i++;
                t = i <= n;
                if(t == 1)
                        goto loop;

        done:
                printf("The result is %d\n", fac);
                return 0;
}

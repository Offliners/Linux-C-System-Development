#include<stdio.h>

int main()
{
        int n;
        int sum = 0;
        int i;
        int t;

        scanf("%d", &n);

        i = 1;
        t = i <= n;
        if(t == 0)
                goto done;
        else
                goto loop;

        loop:
                sum += i;
                i++;
                t = i <= n;
                if(t == 0)
                        goto done;
                else
                        goto loop;

        done:
                printf("The result is %d\n", sum);
                return 0;
}

#include<stdio.h>

int main()
{
        int n;
        int fac = 1;
        int i;

        scanf("%d", &n);

        i = 1;
        do
        {
                fac *= i;
                i++;
        }while(i <= n);

        printf("The result is %d\n", fac);

        return 0;
}

#include<stdio.h>

int main()
{
        int n;
        int sum = 0;
        int i;

        scanf("%d", &n);

        for(i = 1;i <= n;i++)
                sum += i;

        printf("The result is %d\n", sum);

        return 0;
}

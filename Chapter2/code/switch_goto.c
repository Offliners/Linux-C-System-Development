#include<stdio.h>

int main()
{
        char score;

        scanf("%c", &score);

        if(score == 'A')
                goto lab_A;
        else if(score == 'B')
                goto lab_B;
        else if(score == 'C')
                goto lab_C;
        else
                goto lab_default;

        goto done;

        lab_A:
                printf("Excellent\n");
                goto done;
        lab_B:
                printf("Good\n");
                goto done;
        lab_C:
                printf("Pass\n");
                goto done;
        lab_default:
                printf("Fail\n");
                goto done;
        done:
                return 0;
}

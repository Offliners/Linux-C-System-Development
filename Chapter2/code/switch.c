#include<stdio.h>

int main()
{
        char score;

        scanf("%c", &score);

        switch(score)
        {
                case 'A':
                        printf("Excellent\n");
                        break;
                case 'B':
                        printf("Good\n");
                        break;
                case 'C':
                        printf("Pass\n");
                        break;
                default:
                        printf("Fail\n");
                        break;
        }

        return 0;
}

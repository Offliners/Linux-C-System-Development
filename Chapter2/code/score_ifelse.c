#include<stdio.h>

int main()
{
        char score;

        scanf("%c", &score);

        if(score == 'A')
                printf("90 ~ 100\n");
        else if(score == 'B')
                printf("80 ~ 90\n");
        else if(score == 'C')
                printf("70 ~ 80\n");
        else if(score == 'D')
                printf("60 ~ 70\n");
        else if(score == 'E')
                printf("0 ~ 50\n");
        else
                printf("Wrong input!\n");

        return 0;
}

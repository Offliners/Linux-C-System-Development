#include<stdio.h>
#include<stdlib.h>

#define MAX 1024

int main()
{
        FILE *fp;
        char buf[MAX];
        int n;
        int letter = 0, blank = 0, number = 0;

        fp = fopen("article.txt", "r");
        if(fp == NULL)
        {
                perror("Fail to open\n");
                exit(1);
        }

        while((n = fread(buf, sizeof(char), MAX, fp)) > 0)
        {
                for(int i = 0; i < n; i++)
                {
                        if((buf[i] >= '0')&&(buf[i] <= '9'))
                                number++;
                        else if(buf[i] == ' ')
                                blank++;
                        else if(((buf[i] >= 'a')&&(buf[i] <= 'z'))||((buf[i] >= 'A')&&(buf[i] <= 'Z')))
                                letter++;
                }
        }

        printf("Letter : %d\n", letter);
        printf("Number : %d\n", number);
        printf("Blank : %d\n", blank);

        fclose(fp);

        return 0;
}

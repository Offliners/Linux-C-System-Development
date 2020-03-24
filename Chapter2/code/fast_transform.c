#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 1024

void lower(char *p);

int main()
{
        FILE *fp;
        char buf[MAX];
        int n;

        fp = fopen("text.txt", "r");
        if(fp == NULL)
        {
                perror("Fail to open!\n");
                exit(1);
        }

        while((n = fread(buf, sizeof(char), MAX - 1, fp)) > 0)
        {
                buf[n] = '\0';
                lower(buf);
        }

        if(n < 0)
        {
                perror("Fail to read!\n");
                exit(1);
        }

        fclose(fp);

        return 0;
}

void lower(char *p)
{
        int len;
        
        len = strlen(p);
        for(int i = 0; i < len; i++)
        {
                if((p[i] >= 'A')&&(p[i] <= 'Z'))
                        p[i] += 32;
                printf("%c", p[i]);
        }
}

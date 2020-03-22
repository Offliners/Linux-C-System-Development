#include<stdio.h>
#include<stdlib.h>
#include <sys/stat.h>

int convert(void);

int main()
{
        if(convert() == -1)
                printf("Fail to convert\n");

        return 0;
}

int convert()
{
        FILE *fp;
        struct stat statbuf;
        char *p, *q;
        int n;
        int res = -1;

        if(stat("test.txt", &statbuf) == -1)
        {
                perror("Fail to get stat\n");
                return res;
        }

        fp = fopen("test.txt", "rb");
        if(fp == NULL)
        {
                perror("Fail to open\n");
                return res;
        }

        p = (char*)malloc(sizeof(char)*(statbuf.st_size + 1));
        if(p == NULL)
        {
                perror("Fail to malloc\n");
                goto err1;
        }

        n = fread(p, sizeof(char), statbuf.st_size, fp);
        if(n == -1)
        {
                perror("Fail to read\n");
                goto err2;
        }

        *(p + n) = '\0';
        q = p;
        while(*q != '\0')
        {
               if((*q >= 'A')&&(*q <= 'Z'))
                        *q += 32;
                printf("%c", *q);
                q++;
        }

        res = 0;

        err1:
                fclose(fp);

        err2:
                free(p);
        
        return 0;
}

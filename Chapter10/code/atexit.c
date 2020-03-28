#include<stdio.h>
#include<stdlib.h>

void f1(void);
void f2(void);

int main()
{
        if(atexit(f1) == -1)
        {
                perror("Fail to set exit handler!\n");
                exit(1);
        }

        if(atexit(f1) == -1)
        {
                perror("Fail to set exit handler!\n");
                exit(1);
        }

        if(atexit(f2) == -1)
        {
                perror("Fail to set exit handler!\n");
                exit(1);
        }

        return 0;
}

void f1()
{
        printf("The first exit handler!\n");
}

void f2()
{
        printf("The second exit handler!\n");
}

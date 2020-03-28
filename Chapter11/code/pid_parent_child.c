#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
        pid_t pid;

        pid = fork();
        if(pid < 0)
        {
                printf("Fail to fork!\n");
                exit(1);
        }
        else if(pid == 0)
                printf("This is child, pid is : %u\n", getpid());
        else
                printf("Thus is parent, pid is : %u, child pid is %u\n", getpid(), pid);

        return 0;
}

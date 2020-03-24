#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
        time_t cur_time;

        if((cur_time = time(NULL)) == -1)
        {
                perror("Fail to get current time!\n");
                exit(1);
        }

        printf("The current time is : %ld\n", cur_time);

        return 0;
}

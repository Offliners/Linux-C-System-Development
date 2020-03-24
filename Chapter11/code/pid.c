#include<stdio.h>
#include<unistd.h>

int main()
{
        pid_t pid, ppid, uid, euid, gid, egid;

        pid = getpid();
        ppid = getppid();
        uid = getuid();
        euid = geteuid();
        gid = getgid();
        egid = getegid();

        printf("ID of current process : %u\n", pid);
        printf("Parent ID of current process : %u\n", ppid);
        printf("User ID of current process : %u\n", uid);
        printf("Effective user ID of current process : %u\n", euid);
        printf("Group ID of current process : %u\n", gid);
        printf("Effective group ID of current process : %u\n", egid);

        return 0;
}

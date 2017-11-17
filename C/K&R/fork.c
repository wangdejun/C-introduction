#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
    pid_t pid;
    pid = fork();/*创建一个child process*/
    
    if(pid<0){/*error*/
        printf("fork failed");
    }else if(pid == 0)/*对子进程来说，fork()函数返回的是值是0*/
    {
        /*子进程空间*/
        printf("exec the child process\n");
    }else
    {
        /*父进程空间*/
        printf("the child process pid is:%d\n", pid);
        wait(NULL);/*parent process wait for the child process to execute finish*/
        printf("child complete\n");
    }
    return 0;
}
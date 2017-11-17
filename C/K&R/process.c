/**
 * 操作系统原理(Peking University)
 * 不同进程之间地址空间不同例程
 * [video adress] https://www.bilibili.com/video/av9555596/index_24.html#page=16
 */

#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int myval;
int main(int argc, char *argv[])
{
    myval = atoi(argv[1]);
    while(1)
    {
        printf("my value is %d, location 0x%llx\n", myval, (long long)&myval);
    }
    return 0;
}
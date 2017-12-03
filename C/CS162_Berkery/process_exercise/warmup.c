#include <stdio.h>
#include <sys/syscall.h>
#include <sys/types.h>

int main(void){
  for(int i = 0; i < 3; i++){
    pid_t pid = fork();
    printf("%d-------------\n", i);
    if(pid<0)
      printf("    error in fork!\n");
    else if(pid==0)
      printf("    子进程空间\n");
    else
      printf("    父进程空间 PID是%d\n",pid);
    printf("%d-------------\n", i);
  }
  return 0;
}

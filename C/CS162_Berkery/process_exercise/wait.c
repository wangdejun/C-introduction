#include <stdio.h>
#include <sys/types.h>

int main(){
  pid_t pid = fork();
  int exit;
  if(pid!=0){
    wait(&exit);
  }
  printf("%d\n", pid);
}

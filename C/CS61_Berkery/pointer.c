#include <stdio.h>
void f(int x, int *p){
  x=5;
  *p=-9;
}

int main(void){
  int a = 1, b=-3;
  f(a,&b);
  printf("a=%d b=%d\n", a, b);
}

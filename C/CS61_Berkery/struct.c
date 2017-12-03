#include <stdio.h>

int main(){
  typedef struct{
    double z;
    int x;
    int y;
    char c;
  }Point;

  Point pt = {12.5, 0, 5, 'w'};
  Point *pt_ptr = &pt;

  printf("------------------\n");
  printf("(*pt_ptr).x : %d\n(*pt_ptr).y : %d\n",(*pt_ptr).x,(*pt_ptr).y);
  printf("*pt_ptr->x:%d\n*pt_ptr->y:%d\n",pt_ptr->x, pt_ptr->y);
  printf("sizeof(double) : %lu", sizeof(double));
  printf("sizeof c%lu\n", sizeof(*pt_ptr));
  printf("-------------------\n");

  return 0;
}


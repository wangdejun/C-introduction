#include <stdio.h>

int main(){
  int a[]={1,2,3};
  for(int i=0; i<sizeof(a)/sizeof(int); i++){
    printf("%d,%d\n",i,a[i]);
  }
  printf("----------------\n\n");
  for(int j=0; j<4; j++){
    printf("%d,%d\n",j,a[j]);
  }

  return 0;
}

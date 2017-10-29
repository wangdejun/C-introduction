#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p;
    p = (int *) malloc(1);  //动态分配内存
    //检查内存分配情况，如果失败(有可能是内存不足^_^)，则退出;
  	if(p == NULL){
	  printf("memory malloc failed");
	  exit(-1);
	}
  
    *p = 123;
    printf("p指针中的内容=%d", *p);
    free(p);   //内存释放
    return 0;
}

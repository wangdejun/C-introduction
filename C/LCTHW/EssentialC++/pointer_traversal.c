#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[5], *p = a, i;
    for (i = 0; i < 5; i++)
    {
        *p = i;
        p++;
    }
  
    //新建一个指向int类型的指针，用于遍历数组，并且输出
  	int *rp = a, j;
 
 	for(int j=0; j<5; j++){
        printf("value is %d and ",*rp);
        printf("address is:%p\n", rp);
		rp++;
	}
  
    return 0;
}

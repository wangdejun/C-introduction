#include <stdio.h>

int main()
{ 
    int *pmax, *pmin, a = 10, b = 20;
    pmax = &a;
    pmin = &b;
    if (a < b)
    {
        pmax = &b;
	  	pmin = &a;
    }
    printf("a=%d, b=%d\n", a, b);
    printf("最大值=%d, 最小值=%d\n", *pmax, *pmin);
  
    return 0;
}
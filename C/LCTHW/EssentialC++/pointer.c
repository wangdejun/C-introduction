#include <stdio.h>

int main()
{
    int a = 12;
    float b = 12.1;
    char c = 'm';
    
    int *ap = &a;
    float *bp = &b;
    char *cp = &c;

    printf("%p\n%p\n%p\n", ap, bp, cp);
    printf("%d\n%f\n%c\n", *ap, *bp, *cp);

    return 0;
}

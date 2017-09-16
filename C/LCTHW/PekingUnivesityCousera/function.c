#include <math.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int x = 100;
    int r = 0;
    r = sqrt(101);
    printf("%d开方为：%d\n", x, r);
    printf("-------------\n");    

    x = 100;
    int y = 3;
    r = pow(x, y);
    printf("%d的%d次幂为：%d\n", x, y, r);
    printf("-------------\n");

    char mystr[]={'w','a','n','g'};
    int theStringLength = strlen(mystr);
    printf("%d\n", theStringLength);
    printf("-------------\n");
    
    char mystr1[] = {'A'};
    char mystr2[] = {'b'};
    int cmpResult = strcmp(mystr2, mystr1);
    printf("%d\n", cmpResult);
    printf("--------------\n");

    char myNum[] = {'1','2'};
    int n = atoi(myNum);
    printf("%d",n);


    return 0;
}
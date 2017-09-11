#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

/*Our old friend die from ex 17*/
//传一个常亮字符指针 *message
void die(const char *message)
{
    if(errno){
        perror(message);
    }else{
        printf("ERROR: %s\n",message);
    }
    exit(1);
}

// a typedef creates a type in this case for a function pointer
//用typedef确定一个函数指针
typedef int (*compare_cb)(int a, int b);

/**
  *  A classic bubble sort function that uses the compare_b todo the sorting
  *  使用compare cmp函数来做的经典冒泡排序
  */

int *bubble_sort(int *numbers, int count, compare_cb cmp)
{
    int temp = 0;
    int i = 0;
    int j = 0;
    int *target = malloc(sizeof(int) * count);
    if(!target)
        die("Memory Error.");

    memcpy(target, numbers, count * sizeof(int));
    //外层循环
    for(i = 0; i < count; i++){
        //内层循环
        for(j=0; j< count-1;j++){
            if(cmp(target[j], target[j+1]) > 0){
                temp = target[j+1];
                target[j+1] = target[j];
                target[j] = temp;
            }
        }
    }
    return target;
}
//正序
int sorted_order(int a, int b)
{
    return a-b;
}
//逆序
int reverse_order(int a, int b)
{
    return b-a;
}
//其他顺序
int strange_order(int a, int b)
{
    if(a == 0||b==0){
        return 0;
    }else{
        return a % b;
    }
}

/*
 * Used to test that we are sorting things correctly by doing the sort and p
 * printing it out
 * in the function below, we pass 3 params including a callback function's pointer
 * notice it!
 */

void test_sorting(int *numbers, int count, compare_cb cmp)
{
    int i = 0;
    int *sorted = bubble_sort(numbers , count, cmp);
    if(!sorted)
        die("Failed to sort as requested.");
    for(i=0; i< count;i++){
        printf("%d ", sorted[i]);
    }

    printf("\n");

    free(sorted);
    
    unsigned char *data = (unsigned char *)cmp;
    
    for(i = 0; i < 25; i++) {
        printf("%02x:", data[i]);
    }
    
    printf("\n");
}


//The main function
int main(int argc, char *argv[])
{
    if(argc < 2)
        die("USAGE: ex18 4 3 1 5 6");
    
    int count = argc - 1;
    int i = 0;
    char **inputs = argv + 1;

    int *numbers = malloc(count * sizeof(int));
    if(!numbers) 
        die("Memory error.");

    for(i=0;i<count;i++){
        numbers[i] = atoi(inputs[i]);
    }

    test_sorting(numbers, count, sorted_order);
    test_sorting(numbers, count, reverse_order);
    test_sorting(numbers, count, strange_order);


    free(numbers);
    return 0;
}
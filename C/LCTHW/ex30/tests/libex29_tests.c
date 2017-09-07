#include "minunit.h"


char *test_dlopen(){

    return NULL;
}

char *test_functions(){

    return NULL;
}

char *test_failures(){

    return NULL;
}

char *test_dlclose(){

    return NULL;
}

char *all_tests(){
    mu_suite_start();

    mu_run_test(test_dlopen);
    mu_run_test(test_functions);
    mu_run_test(test_failures);
    mu_run_test(test_dlclose);

    return NULL;
}
//最后需要使用RUN_TESTS宏来启动main函数，让它运行all_tests启动器
RUN_TESTS(all_tests);
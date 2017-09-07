#include <stdio.h>
#include "dbg.h"
#include <dlfcn.h>
//由于能够实用系统调用加载，动态库可以被多种语言的程序调用，而静态库只能被C以及兼容C的程序调用。
typedef int (*lib_function)(const char *data);//defination of function pointer

int main(int argc, char *argv[])
{
    int rc = 0;
    check(argc == 4, "USAGE: ex29 libex29.so function data");

    char *lib_file = argv[1];
    char *func_to_run = argv[2];
    char *data = argv[3];
    
    //在为一个小型程序做必要的初始化后，我们使用了dlopen函数来加载由lib_file表示的库，这个函数返回一个句柄，就像打开一个文件一样。
    void *lib = dlopen(lib_file, RTLD_NOW);
    check(lib != NULL, "Failed to open the library %s: %s", lib_file, dlerror());
    //我们使用了dlsym来获取lib中的函数，通过它的字面名称func_to_run.这是最强大的部分，因为我动态地获取了一个函数指针，基于我从命令行argv获得的字符串
    lib_function func = dlsym(lib, func_to_run);
    check(func != NULL, "Did not find %s function in the library %s: %s", func_to_run, lib_file, dlerror());
    //调用func函数，获得返回值并进行检查。
    rc = func(data);
    check(rc == 0, "Function %s return %d for data: %s", func_to_run, rc, data);
    //像关闭文件那样关闭了库。通常你需要在程序的整个运行期间保证它们打开，所以关闭操作并不非常实用
    rc = dlclose(lib);
    check(rc == 0, "Failed to close %s", lib_file);

    return 0;

error:
    return 1;
}

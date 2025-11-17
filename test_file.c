#include<stdio.h>

int add(int x, int y) {
    return x + y;
}

int new_function(int x){
    return x * x;
}

//构造一个带有if else条件编译的函数
#ifdef MACRO_ANOTHER
int conditional_function(int x) {
    return x + 10;
}
#else
int conditional_function(int x) {
    return x - 10;
}
#endif

//构造一个带有if else条件编译的函数
#ifdef MACRO_TEST
int another_conditional_function(int x) {
    return x + 2;
}
#else
int another_conditional_function(int x) {
    return x / 2;
}
#endif

int calculate_square(int num) {
    return num * num;
}
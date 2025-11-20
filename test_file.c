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

//新增一个多逻辑函数
int complex_logic_function(int a, int b, int c) {
    if (a > b) {
        if (b > c) {
            return a - c;
        } else {
            return a + b;
        }
    } else {
        if (a == c) {
            return b * 2;
        } else {
            return c - a;
        }
    }
}

#ifdef M

// 只保留逻辑1的版本
void process_data(int x, int y) {
    // 逻辑1：检查参数合法性
    if (x < 0 || y < 0) {
        printf("Invalid input!\n");
        return;
    }
}

#else

// 只保留逻辑2的版本
void process_data(int x, int y) {
    // 逻辑2：执行计算
    int result = x * x + y * y;
    printf("Result = %d\n", result);
}
#endif
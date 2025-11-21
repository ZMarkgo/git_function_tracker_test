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


//新增一个无条件编译的结构体
struct Point {
    int x;
    int y;
};

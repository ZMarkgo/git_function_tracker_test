#include <stdio.h>

//标识符重命名，且条件编译发生变化
#ifdef MACRO_TEST
int cheng(int x, int y) {
    return x * y;
}
#endif


//新增函数
int complex_operation(int a, int b) {
    

    if(a>0){
        b+=10;
    }

    int sum = a + b;
    int product = a * b;

    return sum + product + b;
}

#ifdef MACRO_TEST
int macro_function(int val) {
    return val - 100;
}
#else
int macro_function(int val) {
    return val + 100;
}
#endif


int is_even(int number) {
/*
    多行注释测试
    实现一个判断数字是否为偶数的函数
*/
    return number % 2 == 0;
}

int calculate(int num) {
    return num * num;
}

int compute(int a, int b) {
    int result = 0;
    return result+a+b;
}

int new_function(int x, int y){
    int res = x + y;
    return res;
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

int new_clone_function(int x) {
    int result = 0;
    int i = 0;
    while (i < x) {
        result += i;
        i++;
    }
    return result;
}
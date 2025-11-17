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
    return val + 100;
}
#else
int macro_function(int val) {
    return val - 100;
}
#endif
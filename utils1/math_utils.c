#include<stdio.h>

int subtract(int a, int b) {
    return a - b;
}

#ifdef MACRO_OTHER
 void A(){
    printf("Function A under MACRO is called.\n");
}
#endif

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero.\n");
        return 0; // 返回0表示错误
    }
    return a / b;
}
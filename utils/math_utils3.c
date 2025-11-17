#include<stdio.h>

int subtract(int a, int b) {
    return a - b;
}

int add(int a, int b) {
    return a + b;
}

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0; // 返回0表示错误
    }
    return a / b;
}
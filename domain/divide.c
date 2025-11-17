#include<stdio.h>

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0; // 返回0表示错误
    }
    return a / b;
}

int modulus(int a, int b) {
    if (b == 0) {
        printf("Error: Modulus by zero\n");
        return 0; // 返回0表示错误
    }
    return a % b;
}
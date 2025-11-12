#include <stdio.h>

void process_data(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += i;
    }
    printf("Sum = %d\n", sum);
}

int add(int x, int y) {
    return x + y;
}


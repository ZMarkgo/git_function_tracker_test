#include<stdio.h>

int subtract(int a, int b) {
    return a - b;
}

#ifdef MACRO_OTHER
 void A(){
    printf("Function A under MACRO is called.\n");
}
#endif
#include<stdio.h>

#ifdef MACRO_OTHER
 void A(){
    printf("Function A under MACRO is called.\n");
}

#else
void A(){
    printf("Function A under M_A is called.\n");
}
#endif

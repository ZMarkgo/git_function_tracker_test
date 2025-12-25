#include<stdio.h>

#ifdef MACRO
 void A(){
    printf("Function A under MACRO is called.\n");
}

#elif defined(M_A)
void A(){
    printf("Function A under M_A is called.\n");
}
#else
void A(){
    printf("Function A with no macro is called.\n");
}
#endif

#include<stdio.h>
#include"swap.h"

int a = 4, b = 5;

int main(){
    printf("before any swap -> a=%d, b=%d\n", a, b);
    swap0();
    printf("after swap1 -> a=%d, b=%d\n", a, b);
    swap(a, b);
    printf("after swap2 -> a=%d, b=%d\n", a, b);
    swap2(&a, &b);
    printf("after swap3 -> a=%d, b=%d\n", a, b);
    return 0;
}
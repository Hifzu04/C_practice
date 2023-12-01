#include<stdio.h>
int main(){
    int var= 10;
    int *varptr;
    varptr = &var;
    printf("the value of var is %d , and pinter is %d\n", var , varptr);
    varptr = varptr+5;
    printf("the new value of varptr is %d is\n ", varptr);
}
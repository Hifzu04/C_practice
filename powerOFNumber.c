#include<stdio.h>
int main(){
    int  ans =1;
    int pow , base;
    printf("enter the base and power");
    scanf("%d %d" , &base, &pow);
    for(int i=1; i<=pow; i++){
        ans = ans *base;
    }
    printf("%d",ans);
}
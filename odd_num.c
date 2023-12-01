#include<stdio.h>

int main(){
    int n;
    int sum =0; 
    scanf("%d" , &n);
    for(int i = 1 ; i<=n; i++){
        if(i%2 !=0){
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\n");
    printf("%d" ,sum);
    return 0;
}
#include<stdio.h>
#include<stdbool.h>   //note in c must include bool file.
int main(){
int n, digit;
printf("enter a number : ");
scanf("%d", &n);
printf("enter the digit");
scanf("%d", &digit);
int k = n;
//cout total number of digit in number.
int count =0;
while(n>0){
    n/=10;
    count++;   
}
//to check whether the digit contain or not.
bool flag = 0;
for(int i =0; i<count ; i++){
    int s;
    s = k%10;
    if(s==digit){
        printf("Yes. given number contain digit %d" , digit);
        break;
    }
    else{
        flag =1;
    }
    s /=10;
   
}
if (flag== 1){
    printf("digit not found");
}
return 0 ;

}
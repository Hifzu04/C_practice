#include<stdio.h>
int main(){
printf ("enter a positive number");
int no;
scnaf("%d", &no);
while(no>=1){
    if(no%2==0){
        no /= 2;
        printf("%d", no);

    }
    else{
        no *= 3;
        no +=1;
    } 
    //this question is wrong :(

}
}



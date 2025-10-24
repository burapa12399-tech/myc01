#include "stdio.h" //<stdio.h>
#define showPa printf("-----------------------\n");

int main(){
    int number;

    showPa
    printf("    Even & Odd Numbers\n");
    showPa
    while(1){ //วนแบบ infinite loop
        printf("  Enter number : ");
        scanf("%d", &number);
        if(number <= 0){
            break; //ออกจาก loop
        }
        if(number % 2 == 0){
            printf("Number is even number\n", number);
        } else {
            printf("Number is Odd number\n", number);
        }
        showPa
     
    }

    return 0;
}
#include <stdio.h>
#define showPa printf("-----------------------\n");

int main(){
    int number, result;
    int i;

    showPa
    printf("    Multiplication Table\n");
    showPa
    printf("  Enter number : ");
    scanf("%d", &number);
    showPa

    for(i = 1; i <= 12; i = i + 1){ // ++i, i++, i += 1
        result = number * i;
        printf("%d x %d = %d\n", number, i, result);
    }

    showPa

    return 0;
}
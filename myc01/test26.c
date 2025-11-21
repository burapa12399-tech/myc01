//array
#include <stdio.h>

int main(){

    int x;
    int y[5]; //อาเรย์ 1 มิติ (one dimension array)
    //ประกาศตัวแปรและกำหนดค่าเลย (initial value/ default value)
    int a = 200;
    int b[3] = {10, 20, 30}; 
    int c[] = {11, 22, 33, 44, 55, 66};
    char d[] = {'a','b','c','d'};
    x = 100;
    y[1] = 20 ;

    printf("%d \n", x); //100
    printf("%d \n",y[1]); //20
    printf("%d \n", b[2] + c[1]); //52

    return 0;
}
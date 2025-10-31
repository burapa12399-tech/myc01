#include <stdio.h>

double num1 = 555; //Global
double calSqureAreare(double num1, double num2); 

int sumNumber(double num1, double num2){   //Parameter ถือว่าเป็นตัวแปลแบบ Local
    printf("%lf\n", num1);
    return num1 + num2;
}

int main(){
    double area; 
    printf("%.0lf\n", num1);
    printf("%d\n", sumNumber(10, 20));
    printf("%d\n", sumNumber(1000, 2000));
    printf("%.0lf\n", calSqureAreare(15, 15));

    area = calSqureAreare(10, 20);
    printf("%.0lf\n", area);

    return 0;
}

double calSqureAreare(double num1, double num2){
    printf("%.0lf\n", num1);
    return num1 * num2;
}

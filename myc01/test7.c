//รับค่าชื่อ-สกุล อายุ เงินเดือน แล้วแสดงผลออกทางหน้าจอ

#include <stdio.h>
#define showLine printf("========================================\n");

int main(){

    char fullname[50]; //%s,%[^\n]
    int age;           //%d
    float salary;      //%f

    showLine
    printf(" Profile Information  \n");
    showLine
    printf("Enter your fullname: ");
    scanf("%49[^\n]", &fullname);     //   เรียก Calet
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your salary: ");
    scanf("%f", &salary);
    showLine
    printf("Hello %s\n", fullname);
    printf("Age = %d years\n", age);
    printf("Salary = %.2f Baht\n", salary);
    showLine

   return 0;
}

//หาผลรวมและเลขค่าเฉลี่ยนของตัวเลข 3 จำนวนที่รับทางแป้นพิมพ์ แล้วแสดงผลออกมา
// input, process (คำนวณ/พิสูจน์ตรวจสอบ/ทำซ้ำ), output, save
//feture การทำงานมีอะไรบ้าง เพื่อมาสรุปสร้างเป็น ฟังชั่น

//feature การทำงาน -> รับค่าตัวเลข 3 จำนวน, คำนวณผลรวม, คำนวณค่าเฉลี่ย, แสดงผลลัพธ์, แสดงผลค่าเฉลี่ย
//function -> inputNumber, calSum, calAverage, showSumAndAverage

#include <stdio.h>

int calSum(int num1, int num2, int num3){
    return num1 + num2 + num3;
}

double calAverage(int num1, int num2, int num3){
    return (num1 + num2 + num3) / 3.0;
}

void showSumAndAverage(int sum, double average){
    printf("Sum = %d\n", sum);
    printf("Average = %.2lf\n", average);
}

void inputNumber(){
     int num1, num2, num3;
     int sum;
     double average;

    printf("Enter number 1 : "); scanf("%d", &num1);
    printf("Enter number 2 : "); scanf("%d", &num2);
    printf("Enter number 3 : "); scanf("%d", &num3);

    sum = calSum(num1, num2, num3);
    average = calAverage(num1, num2, num3);
    showSumAndAverage(sum, average);
}

int main(){
    inputNumber();
    return 0;
}
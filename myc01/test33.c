#include <stdio.h>

//สร้าง Structure
typedef struct {
    char name[20];
    int id;
    int age;
    float score;
} SAU; //ใช้ Structure แบบที่เรียกว่า Alias Name

int main(){
    SAU dataA;
    SAU dataD = {"Sombat", 1, 20, 99.99};

    printf("%.2f\n", dataD.score); // => 99.99
    dataD.id = 6719410017;
    return 0;
}
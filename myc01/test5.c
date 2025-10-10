//โปรแกรมแสดงชื่อ sombat และคะแนน 99 ทางหน้าจอ
#intlude <stdio.h>

int main(){
 
    char funliname[10] = "sombat";
    int score;

    score = 99;

//ใน "" ของ printf() เขียนอย่างไรแสดงอย่างนั้น
//ยกเว้น % format spec., \ escape sequence
    printf("Name is:", funliname\n);
    printf("Name is: %s\n", funliname);
    printf("Score is: %d\n", score);

    return 0;
}
#include <stdio.h>

#define senpa printf("================\n")
#define Row_STD 5
#define Col_SUB 3

int main(){
    int stu_score[Row_STD][Col_SUB];
    char sub_name[3][10] = { "MATH", "SCIENCE", "ENGLISH" };

    printf("=============SCORE TABLE=============\n");
    for(int x = 0; x < Row_STD; x++){
        printf("Student No.%d\n", x + 1);
        for(int y = 0; y < Col_SUB; y++){
            printf("  %-10s :", sub_name[y]);
            scanf("%d", &stu_score[x][y]);
        }
        printf("\n");
    }

    printf("=============AVERAGE SCORE SCORE=============\n");
    for(int x = 0; x < Row_STD; x++){
        double sum = 0;
        for(int y = 0; y < Col_SUB; y++){
            sum += stu_score[x][y];
        }
        double avg = sum / Row_STD;
        printf("  %-10s : %lf\n", sub_name[x], avg);
    }

    senpa;

    return 0;
}

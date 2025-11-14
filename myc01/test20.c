#include <stdio.h>

#define senpa printf("------------------\n")
#define EMP_NUM 5

int main(void){

    double EMP_sale[EMP_NUM], sum = 0.0, avg_sale;

    senpa;
    printf("    Average sale\n");
    senpa;
    for(int x = 0; x < EMP_NUM; ++x){  //x++, x=x+1, x+=1
        printf("Employee no. %d Sale: ", x + 1);
        if (scanf("%lf", &EMP_sale[x]) != 1) {
            fprintf(stderr, "Input error\n");
            return 1;
        }
    }
    senpa;
    for(int x = 0; x < EMP_NUM; ++x){
        sum += EMP_sale[x]; 
    }

    avg_sale = sum / EMP_NUM;
    printf("Average sale is: %.2lf\n", avg_sale);
    senpa;
    
    return 0;
}
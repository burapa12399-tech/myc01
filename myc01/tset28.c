//array
#include <stdio.h>

int main(){
#defind Student_number 5
float score[Student_number]; 

 for(int x=0; x < Student_number; x++){
     printf("Enter score %d: ", x++);
     scanf("%f", &score[x]);
   
    }

   

    return 0;
}
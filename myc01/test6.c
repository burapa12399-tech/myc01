//Global-Local Variabe
#include "stdio.h" //หรือ <stdio.h>

int dataA = 555; //Global Variable ใช้มี่ใหนก็ได้

void showData(){
    int dataB = 555; //Local Variable ใช้ได้เฉพาะใน code block นั้นๆ เท่านั้น

    printf("dataA = %d\n", dataA);
    printf("dataB = %d\n", dataB);
    printf("dataE = %d\n", dataE); 
    //printf("dataC = %d\n", dataC); //Error
    //printf("dataD = %d\n", dataD); //Error
}

int main(){
    int dataC = 999; //Local Variable ใช้ได้เฉพาะใน code block นั้นๆ เท่านั้น
    const int dataA = 1010; //Constant (ค่าคงที่) Variable
    //dataD = 200; //Error

    dataC = 888; 

    printf("dataA = %d\n", dataA);
    dataC = 777;
    printf("dataC = %d\n", dataC);
   //printf("dataB = %d\n", dataB); //Error
   printf("dataE = %d\n", dataE);

   return 0;
}
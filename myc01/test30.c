
#include <stdio.h>

int main(){


  int x;
  float y[3]; //อาเรย์ 1 มิติ (one dimension array)

  int *p_x;
  int *p_y =&y[0];
printf("%p \n",&x);
printf("%p \n",&y); 
printf("%p \n",&p_x);
printf("%p \n",&p_y); 

printf("%d \n",&x);
printf("%d \n",&y); 
printf("%d \n",&p_x);
printf("%d \n",&p_y); 
     return 0;
   
    }

   


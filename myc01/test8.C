#include <stdio.h> //printf(), scanf()

#define showLine printf("----------------------------\n");

int main(){

    int bus_number; //int (%d), long (%ld)

    showLine
    printf("  Bus number information\n");
    showLine
    printf("Enter bus number: ");
    scanf("%d", &bus_number);
    showLine
    if(bus_number == 57){
        printf("Go to Pinklo, Bangkhunnon\n");
    }else if(bus_number == 3){
        printf("Go to Sanam Luang, Ladproao\n");
    }else if(bus_number == 71){
        printf("Go to Hua Lamphong, Yaowarat\n");
    }else if(bus_number == 56){
        printf("Go to Bang Lamphu, Sapan Krungthon\n");
    }else if(bus_number == 539){
        printf("Go to Samsen, Anusawari Chai\n");
    }else{
        printf("Don\'t have data\n");
    }
    showLine

   return 0;
}
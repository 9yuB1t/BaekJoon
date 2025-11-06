#include <stdio.h>

int main() {
    
    int hour, minute;
    int alhour, alminute;
    scanf("%d %d", &hour, &minute);

    alminute = minute - 45;
    alhour = hour;

    if(alminute < 0){
        alminute = 60 + alminute;
        alhour = alhour - 1;
    }

    if (alhour < 0){
        alhour = 23;
    }

    printf("%d %d",alhour,alminute);


    return 0;
}
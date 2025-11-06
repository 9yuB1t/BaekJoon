#include <stdio.h>

int main() {
    
    int hour, minute, time;
    int ovhour, ovminute;
    scanf("%d %d %d", &hour, &minute, &time);

    ovminute = minute + time;
    ovhour = hour;

    if(ovminute >= 60){
        ovhour = hour + (ovminute / 60);
        ovminute = ovminute % 60;
    }

    if (ovhour >= 24){
        ovhour = ovhour - 24;
    }

    printf("%d %d",ovhour,ovminute);

    return 0;
}
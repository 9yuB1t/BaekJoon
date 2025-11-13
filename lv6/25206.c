#include <stdio.h>
#include <string.h>

int main(){
    double sum = 0.0;
    double total = 0.0;
    const char *AF[] = {"A+","A0","B+","B0","C+","C0","D+","D0","F"};
    double score[9] = {4.5,4.0,3.5,3.0,2.5,2.0,1.5,1.0,0};
    double pass = 0;
    for(int i = 0; i < 20; i++){
        char subject[51];
        double point;
        char grade[3];
        scanf("%s %lf %s",subject,&point,grade);

        if(strcmp(grade,"P")==0){
            continue;
        }
        for(int j = 0; j < 9; j++){
            if(strcmp(grade,AF[j])==0){
                sum = sum + (score[j] * point);
                total = total + point;
            }
        }
    }
    printf("%lf",sum/total);

    return 0;
}
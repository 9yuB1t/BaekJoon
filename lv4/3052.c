#include <stdio.h>

int main() {

    int A;
    int count = 0;
    int arr[42] = {0};
    int check;

    for(int i = 0; i <10; i++){
        scanf("%d", &A);
        check = A % 42;

        if(arr[check] == 0){
            arr[check] = 1;
            count++;
        }
    }
    printf("%d", count);

    return 0;

}
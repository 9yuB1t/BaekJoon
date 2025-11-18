#include <stdio.h>

int main(){
    int n;
    int array[128];
    while (1)
    {
        int result = 0;
        int count = 0;
        scanf("%d",&n);
        if(n == -1){
            break;
        }

        for(int i = 1; i < n; i++){
            if(n%i ==0){
                array[count++] = i;
                result += i;
            }
        }
        if(result == n){
            printf("%d = ",n);
            for(int j = 0; j < count; j++){
                printf("%d",array[j]);
                if(j < count-1){
                    printf(" + ");
                }
            }
            printf("\n");
        }else{
            printf("%d is NOT perfect.\n",n);
        }
    }

    return 0;
}
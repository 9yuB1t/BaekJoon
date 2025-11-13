#include <stdio.h>
#include <string.h>

int main(){

    int N;
    char insert[102];
    int count = 0;
    scanf("%d",&N);

    for(int i = 0; i < N; i++){
        scanf("%s", insert);

        int len = (int)strlen(insert);
        int check[26] = {0};
        int result = 1;

        check[insert[0]-97] = 1;

        for(int j = 1; j < len; j++){
            if(insert[j]==insert[j-1] || check[insert[j]-97] == 0){
                check[insert[j]-97] = 1;
            }else{
                result = 0;
                break;
            }
        }
        if(result == 1){
            count++;
        }
    }
    printf("%d", count);

    return 0;
}
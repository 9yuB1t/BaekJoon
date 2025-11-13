#include <stdio.h>
#include <string.h>

int main(){
    const char *cro[] = {"dz=","c=","c-","d-","lj","nj","s=","z="};
    int len;
    char insert[102];
    int count = 0;

    fgets(insert,sizeof(insert),stdin);
    len = (int)strlen(insert);
    if(len > 0 && insert[len -1] =='\n'){
        insert[len -1] = '\0';
        len--;
    }

    for(int i = 0; i < len;){
        int result = 0;
        if(strncmp(&insert[i],cro[0],3)==0){
            count++;
                i += 3;
                result = 1;
                continue;
        }
        for(int j = 1; j < 8; j++){
            if(strncmp(&insert[i],cro[j],2)==0){
                count++;
                i += 2;
                result = 1;
                break;
            }
        }
        if (result == 0){
            count++;
            i++;
        }
    }
    printf("%d",count);


    return 0;
}
#include <stdio.h>

int main() {

    int totalprice, totalcount;
    int price, count;
    int sum = 0;
    
    scanf("%d %d",&totalprice,&totalcount);
    for(int i = 0; i < totalcount; i++){
        scanf("%d %d",&price,&count);
        sum = sum + price * count;
    }
    if ( totalprice == sum){
        printf("Yes");
    }else{
        printf("No");
    }
    
    return 0;
}
#include <stdio.h>
#include <string.h>

int cnt;

int recursion(char *s, int l, int r){
    cnt++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(char *s){
    cnt = 0;
    return recursion(s, 0, strlen(s)-1);
}

int main(){
    int N;
    scanf("%d",&N);

    char temp[1001];
    for(int i = 0; i < N; i++){
        scanf("%s",temp);
        int result = isPalindrome(temp);
        printf("%d %d\n",result,cnt);
    }
    return 0;
}
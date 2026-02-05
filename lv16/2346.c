#include <stdio.h>

#define DEQUEUE_SIZE 1003

typedef struct
{
    int num;
    int idx;
}BALLOON;

BALLOON dequeue[DEQUEUE_SIZE];

int front = 0;
int back = 0;

int size(){
    return (back - front + DEQUEUE_SIZE) % DEQUEUE_SIZE;
}

void add_front(BALLOON temp){
    front = (front - 1 + DEQUEUE_SIZE) % DEQUEUE_SIZE;
    dequeue[front] = temp;
}

void add_back(BALLOON temp){
    dequeue[back] = temp;
    back = (back + 1) % DEQUEUE_SIZE;
}

BALLOON del_front(){
    BALLOON out = dequeue[front];
    front = (front + 1) % DEQUEUE_SIZE;
    return out;
}

BALLOON del_back(){
    back = (back - 1 + DEQUEUE_SIZE) % DEQUEUE_SIZE;
    BALLOON out = dequeue[back];
    return out;
}

int main(){

    int N;
    BALLOON temp;

    scanf("%d",&N);
    
    for(int i = 0; i < N; i++){
        scanf("%d",&temp.num);
        temp.idx = i + 1;
        add_back(temp);
    }

    while (1)
    {
        BALLOON temp_struct = del_front();
        int check = temp_struct.num;
        if(size() == 0){
            printf("%d",temp_struct.idx);
            break;
        }else{
            printf("%d ",temp_struct.idx);
        }

        if(check > 0){
            for(int i = 0; i < check - 1; i++){
                add_back(del_front());
            }
        }else{
            for(int i = 0; i > check; i--){
                add_front(del_back());
            }
        }
    }
    

    return 0;
}
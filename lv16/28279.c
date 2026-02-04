#include <stdio.h>

#define DEQUEUE_SIZE 1000002
int dequeue[DEQUEUE_SIZE];
int front = 0;
int back = 0;

int size(){
    return (back - front + DEQUEUE_SIZE) % DEQUEUE_SIZE;
}

void add_front(int num){
    front = (front - 1 + DEQUEUE_SIZE) % DEQUEUE_SIZE;
    dequeue[front] = num;
}

void add_back(int num){
    dequeue[back] = num;
    back = (back + 1) % DEQUEUE_SIZE;
}

int remove_front(){
    int num;
    if(size() > 0){
        num = dequeue[front];
        front = (front + 1) % DEQUEUE_SIZE;
    }else{
        num = -1;
    }
    return num;
}

int remove_back(){
    int num;
    if(size() > 0){
        back = (back - 1 + DEQUEUE_SIZE) % DEQUEUE_SIZE;
        num = dequeue[back];
    }else{
        num = -1;
    }
    return num;
}

int print_front(){
    int num;
    if(size() > 0){
        num = dequeue[front];
    }else{
        num = -1;
    }
    return num;
}

int print_back(){
    int num;
    int idx = (back - 1 + DEQUEUE_SIZE) % DEQUEUE_SIZE;
    if(size() > 0){
        num = dequeue[idx];
    }else{
        num = -1;
    }
    return num;
}

int is_void(){
    if(size() == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int N;
    scanf("%d",&N);

    for(int i = 0; i < N; i++){
        int command;
        scanf("%d",&command);
        int temp = 0;
        switch (command)
        {
        case 1:
            scanf("%d",&temp);
            add_front(temp);
            break;
        case 2:
            scanf("%d",&temp);
            add_back(temp);
            break;
        case 3:
            printf("%d\n",remove_front());
            break;
        case 4:
            printf("%d\n",remove_back());
            break;
        case 5:
            printf("%d\n",size());
            break;
        case 6:
            printf("%d\n",is_void());
            break;
        case 7:
            printf("%d\n",print_front());
            break;
        case 8:
            printf("%d\n",print_back());
            break;
        default:
            break;
        }

    }

    return 0;

}
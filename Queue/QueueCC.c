//
// Created by HAO on 2023/10/15.
//

#include <stdio.h>
#include <stdlib.h>

struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *queue,int x){
    queue->front = queue->rear = 0;
    queue->size = x;
    queue->Q = (int*)malloc(x * sizeof(int ));
}

void enqueue(struct Queue *queue,int x){
    if((queue->rear+1) % queue->size == queue->front){
        printf("Queue is full!\n");
        return;
    }
    queue->rear = (queue->rear+1) % queue->size;
    queue->Q[queue->rear] = x;
}

int dequeue(struct Queue *queue){
    int x = -1;
    if(queue->front == queue->rear){
        printf("Queue is Empty!\n");
    } else{
        queue->front = (queue->front+1)%queue->size;
        x = queue->Q[queue->front];
    }
    return x;
}

void display(struct Queue *queue){

    int i = queue->front + 1;
    do{
        printf("%d ",queue->Q[i]);
        i = (i+1)%queue->size;
    } while (i != (queue->rear +1)%queue->size);
}


int main(){
    struct Queue queue;
    create(&queue,5);
    enqueue(&queue,1);
    enqueue(&queue,2);
    enqueue(&queue,3);
    enqueue(&queue,4);
    enqueue(&queue,5);
    printf("%d\n",dequeue(&queue));
    enqueue(&queue,7);
    enqueue(&queue,8);
    enqueue(&queue,9);
    display(&queue);

}

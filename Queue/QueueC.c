////
//// Created by HAO on 2023/10/15.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Queue{
//    int size;
//    int front;
//    int rear;
//    int *Q;
//};
//
//void create(struct Queue *queue,int x){
//    queue->front = queue->rear = -1;
//    queue->size = x;
//    queue->Q = (int*)malloc(x * sizeof(int ));
//}
//
//void enqueue(struct Queue *queue,int x){
//    if(queue->rear == queue->size-1){
//        printf("Queue is full!\n");
//        return;
//    }
//    queue->rear++;
//    queue->Q[queue->rear] = x;
//}
//
//int dequeue(struct Queue *queue){
//    int x = -1;
//    if(queue->front == queue->rear){
//        printf("Queue is Empty!\n");
//    } else{
//        queue->front++;
//        x = queue->Q[queue->front];
//    }
//    return x;
//}
//
//void display(struct Queue *queue){
//    for (int i = queue->front+1; i <= queue->rear; i++) {
//        printf("%d ",queue->Q[i]);
//    }
//}
//
//
//int main__(){
//    struct Queue queue;
//    create(&queue,5);
//    enqueue(&queue,1);
//    enqueue(&queue,2);
//    enqueue(&queue,3);
//    enqueue(&queue,4);
//    enqueue(&queue,5);
//    printf("%d\n",dequeue(&queue));
//    enqueue(&queue,7);
//    enqueue(&queue,8);
//    enqueue(&queue,9);
//    display(&queue);
//
//}

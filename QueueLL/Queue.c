//
// Created by HAO on 2023/10/17.
//

#include <stddef.h>
#include <malloc.h>

struct Node{
    int data;
    struct Node *next;
}*front = NULL,*rear = NULL;


void enqueue(int x){
    struct Node * temp;
    temp = (struct Node *)malloc(sizeof (struct Node));
    if(temp == NULL){
        printf("Queue is Full !\n");
        return;
    }
    temp->data = x;
    temp->next = NULL;
    if(front == NULL){
        front = rear = temp;
    } else{
        rear->next = temp;
        rear = temp;
    }

}

int dequeue(){
    int x = -1;
    struct Node *temp;
    if(front == NULL){
        printf("Queue is empty!\n");
    }
    x = front->data;
    temp = front;
    front = front->next;
    free(temp);
    return x;
}

void display(){
    struct Node *p = front;
    while (p){
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    dequeue();
    display();
    return 0;
}
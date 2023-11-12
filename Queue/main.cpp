#include <iostream>

using namespace std;

class Queue{
private:
    int size;
    int front;
    int rear;
    int *Q;
public:
    Queue(){ this->front = this->rear = -1;size = 10;Q = new int[size];}
    Queue(int size){ this->front = this->rear = -1;this->size = size;Q = new int[size];}
    void enqueue(int x);
    int dequeue();
    void display();
};

void Queue::enqueue(int x) {
    if(rear == size - 1){
        cout<<"Queue is Full" << endl;
        return;
    }
    rear++;
    Q[rear] = x;
}

int Queue::dequeue() {
    int x = 0;
    if(rear == front){
        cout<<"The queue is empty!"<<endl;
    } else{
        front++;
        x = Q[front];
    }
    return x;
}

void Queue::display() {
    for (int i = front+1; i <= rear; i++) {
        cout<<Q[i]<<" ";
    }
    cout<<endl;

}

int main11() {
    Queue queue(5);
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.display();
    queue.dequeue();
    queue.display();
    return 0;
}

#include <stdlib.h>
#include <stdbool.h>


typedef struct QNode {
    int val;
    struct QNode* next;
} QNode;

typedef struct {
    QNode* front;
    QNode* rear;
    int size;
} Queue;

Queue* createQueue(void) {
    Queue* q = malloc(sizeof(Queue));
    q->front = NULL;
    q->rear  = NULL;
    q->size  = 0;
    return q;
}

void enqueue(Queue* q, int x) {
    QNode* node = malloc(sizeof(QNode));
    node->val = x;
    node->next = NULL;
    if (q->rear) {
        q->rear->next = node;
    } else {
        q->front = node;
    }
    q->rear = node;
    q->size++;
}

int dequeue(Queue* q) {
    if (!q->front) return 0;
    int val = q->front->val;
    QNode* temp = q->front;
    q->front = q->front->next;
    if (!q->front) q->rear = NULL;
    free(temp);
    q->size--;
    return val;
}

int queueFront(Queue* q) {
    return q->front->val;
}

bool queueEmpty(Queue* q) {
    return q->size == 0;
}

void freeQueue(Queue* q) {
    while (q->front) {
        QNode* temp = q->front;
        q->front = q->front->next;
        free(temp);
    }
    free(q);
}


typedef struct {
    Queue* q;
} MyStack;

MyStack* myStackCreate(void) {
    MyStack* s = malloc(sizeof(MyStack));
    s->q = createQueue();
    return s;
}

void myStackPush(MyStack* obj, int x) {
    enqueue(obj->q, x);
    
    int n = obj->q->size - 1;
    for (int i = 0; i < n; i++) {
        enqueue(obj->q, dequeue(obj->q));
    }
}

int myStackPop(MyStack* obj) {
    return dequeue(obj->q);
}

int myStackTop(MyStack* obj) {
    return queueFront(obj->q);
}

bool myStackEmpty(MyStack* obj) {
    return queueEmpty(obj->q);
}

void myStackFree(MyStack* obj) {
    freeQueue(obj->q);
    free(obj);
}

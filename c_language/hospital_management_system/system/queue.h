#ifndef QUEUE_H
#define QUEUE_H

#include "patient.h"

typedef struct {
    Patient* patients;
    int capacity;
    int front;
    int rear;
    int size;
} Queue;

Queue* createQueue(int capacity);
void destroyQueue(Queue* queue);
void enqueue(Queue* queue, Patient patient);
Patient dequeue(Queue* queue);
int isQueueEmpty(Queue* queue);
int isQueueFull(Queue* queue);

#endif

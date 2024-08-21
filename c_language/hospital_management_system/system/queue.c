#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

Queue* createQueue(int capacity) {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->capacity = capacity;
    queue->front = queue->rear = queue->size = 0;
    queue->patients = (Patient*)malloc(capacity * sizeof(Patient));
    return queue;
}

void destroyQueue(Queue* queue) {
    free(queue->patients);
    free(queue);
}

void enqueue(Queue* queue, Patient patient) {
    if (queue->size == queue->capacity) {
        printf("Queue is full!\n");
        return;
    }
    queue->patients[queue->rear] = patient;
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->size++;
}

Patient dequeue(Queue* queue) {
    Patient patient = queue->patients[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size--;
    return patient;
}

int isQueueEmpty(Queue* queue) {
    return queue->size == 0;
}

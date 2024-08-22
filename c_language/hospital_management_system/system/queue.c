#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

/**
 * Creates a new queue with a specified capacity.
 * 
 * @param capacity The maximum number of elements the queue can hold.
 * @return Queue* A pointer to the newly created queue.
 */
Queue* createQueue(int capacity) {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->capacity = capacity;
    queue->size = 0;
    queue->front = 0;
    queue->rear = capacity - 1;
    queue->patients = (Patient*)malloc(queue->capacity * sizeof(Patient));
    return queue;
}

/**
 * Frees the memory allocated for the queue.
 * 
 * @param queue A pointer to the queue to be destroyed.
 */
void destroyQueue(Queue* queue) {
    free(queue->patients);
    free(queue);
}

/**
 * Checks if the queue is empty.
 * 
 * @param queue A pointer to the queue.
 * @return int Returns 1 if the queue is empty, otherwise returns 0.
 */
int isQueueEmpty(Queue* queue) {
    return (queue->size == 0);
}

/**
 * Checks if the queue is full.
 * 
 * @param queue A pointer to the queue.
 * @return int Returns 1 if the queue is full, otherwise returns 0.
 */
int isQueueFull(Queue* queue) {
    return (queue->size == queue->capacity);
}

/**
 * Adds a patient to the rear of the queue.
 * 
 * @param queue A pointer to the queue.
 * @param patient The patient to be added to the queue.
 */
void enqueue(Queue* queue, Patient patient) {
    if (isQueueFull(queue)) {
        printf("Queue is full. Cannot enqueue patient.\n");
        return;
    }
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->patients[queue->rear] = patient;
    queue->size++;
}

/**
 * Removes a patient from the front of the queue.
 * 
 * @param queue A pointer to the queue.
 * @return Patient Returns the patient removed from the front of the queue.
 */
Patient dequeue(Queue* queue) {
    if (isQueueEmpty(queue)) {
        printf("Queue is empty. Cannot dequeue patient.\n");
        Patient emptyPatient = { .id = -1 };
        return emptyPatient;
    }
    Patient patient = queue->patients[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size--;
    return patient;
}

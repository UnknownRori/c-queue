#include <stdlib.h>
#include <stdio.h>
#include "Queue.h"

void push_back(Queue *queue)
{
    for (int i = 1; i <= queue->top; i++)
    {
        queue->data[i - 1] = queue->data[i];
    }
}

void print(Queue *queue)
{
    for (int i = 0; i <= queue->top; i++)
    {
        if (i >= queue->top)
            printf("%d", queue->data[i]);
        else
            printf("%d, ", queue->data[i]);
    }
    printf("\n");
}

void queue(Queue *queue, int value)
{
    queue->top++;

    if (queue->top >= queue->size)
        exit(1);

    queue->data[queue->top] = value;
}

int dequeue(Queue *queue)
{
    if (queue->top < 0)
        exit(1);

    int temp = queue->data[0];

    queue->data[0] = -1;

    push_back(queue);

    queue->top--;

    return temp;
}

int end(Queue *queue)
{
    return queue->data[queue->top];
}

int first(Queue *queue)
{
    return queue->data[0];
}

Queue *createQueue(int size)
{
    Queue *newQueue;
    newQueue = malloc(sizeof(Queue));
    newQueue->data = malloc(sizeof(int) * size);
    newQueue->top = -1;
    newQueue->size = size;
    newQueue->queue = &queue;
    newQueue->dequeue = &dequeue;
    newQueue->first = &first;
    newQueue->end = &end;
    newQueue->print = &print;
}
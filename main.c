#include <stdio.h>
#include "Queue.h"

int main()
{
    Queue *queue = createQueue(10);

    queue->queue(queue, 1);
    queue->queue(queue, 2);
    queue->queue(queue, 3);

    queue->print(queue);

    printf("Result dequeue : %d \n", queue->dequeue(queue));

    queue->print(queue);

    printf("Current First  : %d \n", queue->first(queue));
    printf("Current Top    : %d \n", queue->end(queue));

    queue->queue(queue, 4);
    queue->queue(queue, 5);
    queue->queue(queue, 6);
    queue->queue(queue, 7);
    queue->queue(queue, 8);
    queue->queue(queue, 9);
    queue->queue(queue, 10);
    queue->queue(queue, 11);

    printf("Current First  : %d \n", queue->first(queue));
    printf("Current Top    : %d \n", queue->end(queue));
    queue->print(queue);

    return 0;
}
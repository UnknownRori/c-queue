#ifndef QUEUE_H
#define QUEUE_H

typedef struct Queue Queue;

struct Queue
{
    int *data;
    int size;
    int top;

    /**
     * @brief Queue the value
     *
     * @param Queue
     */
    void (*queue)(Queue *queue, int value);

    /**
     * @brief Return the first value and remove it from queue
     *
     * @param Queue
     */
    int (*dequeue)(Queue *queue);

    /**
     * @brief Return the last value in the queue
     *
     * @param Queue
     */
    int (*end)(Queue *Queue);

    /**
     * @brief Return the first value in the queue
     *
     * @param Queue
     */
    int (*first)(Queue *Queue);
};

#endif
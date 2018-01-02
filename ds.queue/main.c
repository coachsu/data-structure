#include<stdio.h>
#include<stdlib.h>
#include"queue.h"

int main(void) {
	Queue *q = (Queue*)malloc(sizeof(Queue));
	enQueue(q, 2);
	printQueue(q);
	enQueue(q, 5);
	printQueue(q);
	enQueue(q, 4);
	printQueue(q);

	printf("Dequeue: %d\n", deQueue(q));
	printQueue(q);

	free(q);

	return 1;
}

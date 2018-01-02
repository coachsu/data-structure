#include<stdio.h>
#include"queue.h"

int main(void) {
	Queue q;
	enQueue(q, 2);
	enQueue(q, 5);
	enQueue(q, 4);
	printQueue(q);

	printf("Dequeue: %d\n", deQueue(q));
	printQueue(q);

	return 1;
}

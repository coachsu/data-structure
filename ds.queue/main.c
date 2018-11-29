#include<stdio.h>
#include<stdlib.h>
#include"queue.h"

int main(void) {
	Queue *q = (Queue*)malloc(sizeof(Queue));

	int op = 3;
	int data;
	
	while(op != 0) {
		printf("Operations: (0) exit ; (1) enqueue ; (2) dequeue ; (3) print ? ");
		scanf("%d", &op);

		switch(op) {
		case 0:
			printf("Bye\n");			
			break;

		case 1:
			printf("Data enqueued: ");
			scanf("%d", &data);
			enQueue(q, data);
			break;

		case 2:
			if(isQueueEmpty(q))
				printf("Queue is empty.\n");
			else
				printf("Data dequeued: %d\n", deQueue(q));
			break;

		case 3:
			printQueue(q);
			break;

		default:
			printf("Command not found.\n");
			break;

		}
	} 

	free(q);

	return EXIT_SUCCESS;
}

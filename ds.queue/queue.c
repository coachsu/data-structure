#include<stdio.h>
#include<stdlib.h>
#include "queue.h"

void enQueue(Queue *q, int d) {
	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->data = d;
	new_node->next = NULL;

	if(q->rear == NULL) {
		q->front = new_node;
	} else {
		q->rear->next = new_node;
	}
	q->rear = new_node;
}

int deQueue(Queue* q){
	int data;
	Node* temp;

	if(isQueueEmpty(q)) return -1; 

	if(q->front == q->rear) {
		data = q->front->data;
		temp = q->front;
		q->front = NULL;
		q->rear = NULL;
	} else {
		data = q->front->data;
		temp = q->front;
		q->front = q->front->next;
	}
	free(temp);
	return data;
}

int isQueueEmpty(Queue* q){
	if(q->rear == NULL && q->front == NULL)
		return 1;
	else
		return 0;
}

void printQueue(Queue* q){
	Node* temp = q->front;
	printf("FRONT ");
	while(temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("REAR\n");
}

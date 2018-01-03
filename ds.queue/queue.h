typedef struct node {
	int data;
	struct node* next;
} Node;

typedef struct queue {
	Node* front;
	Node* rear;
} Queue;

extern void enQueue(Queue*, int);
extern int deQueue(Queue*);
extern int isQueueEmpty(Queue*);
extern void printQueue(Queue*);

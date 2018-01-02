typedef struct node {
	int data;
	struct node* next;
} Node;

typedef struct queue {
	Node* front;
	Node* rear;
} Queue;

//typedef struct Node QNode;
//typedef QNode* LQNode;
//LQNode front = NULL;
//LQNode rear = NULL;

extern void enQueue(Queue, int);
extern int deQueue(Queue);
extern int isQueueEmpty(Queue);
void printQueue(Queue);

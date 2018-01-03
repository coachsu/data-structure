typedef struct node {
	int data;
	struct node* next;
} Node;

typedef struct stack {
	Node* top;
} Stack;

extern void push(Stack*, int);
extern int pop(Stack*);
extern int isStackEmpty(Stack*);
extern void printStack(Stack*);

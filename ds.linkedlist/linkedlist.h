typedef struct node {
	int data;
	struct node* next;
} Node;

typedef struct list {
	Node* first;
} List;

extern void addFirst(List*, int);
extern void addLast(List*, int);
extern void delFirst(List*);
extern void delLast(List*);
extern void printList(List*);
extern int  getSize(List*);

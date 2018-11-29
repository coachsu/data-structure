#include<stdio.h>
#include<stdlib.h>
#include "stack.h"

void push(Stack *s, int d) {
	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->data = d;

	if(s->top == NULL) {
		new_node->next = NULL;
	} else {
		new_node->next = s->top;
	}
	s->top = new_node;
}

int pop(Stack *s){
	int data;
	Node* temp;

	if(isStackEmpty(s)) return -1; 

	data = s->top->data;
	temp = s->top;
	s->top = s->top->next;

	free(temp);
	return data;
}

int isStackEmpty(Stack *s){
	if(s->top == NULL)
		return 1;
	else
		return 0;
}

void printStack(Stack *s){
	Node* temp = s->top;
	printf("TOP ");
	while(temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

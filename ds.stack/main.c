#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

int main(void) {
	Stack *s = (Stack*)malloc(sizeof(Stack));
	push(s, 2);
	printStack(s);
	push(s, 5);
	printStack(s);
	push(s, 4);
	printStack(s);

	printf("Pop: %d\n", pop(s));
	printStack(s);

	free(s);

	return 1;
}

#include<stdio.h>
#include"stack.h"

int main(void) {
	Stack s;
	push(s, 2);
	push(s, 5);
	push(s, 4);
	printStack(s);

	printf("Pop: %d\n", pop(s));
	printStack(s);

	return 1;
}

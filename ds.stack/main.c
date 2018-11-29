#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

int main(void) {
	Stack *s = (Stack*)malloc(sizeof(Stack));

	int op = 3;
	int data;
	
	while(op != 0) {
		printf("Operations: (0) exit ; (1) push ; (2) pop ; (3) print ? ");
		scanf("%d", &op);

		switch(op) {
		case 0:
			printf("Bye\n");			
			break;

		case 1:
			printf("Data pushed: ");
			scanf("%d", &data);
			push(s, data);
			break;

		case 2:
			if(isStackEmpty(s))
				printf("Stack is empty.\n");
			else
				printf("Data poped: %d\n", pop(s));
			break;

		case 3:
			printStack(s);
			break;

		default:
			printf("Command not found.\n");
			break;

		}
	} 

	free(s);

	return EXIT_SUCCESS;
}

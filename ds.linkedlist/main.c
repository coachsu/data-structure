#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"

int main(void) {
	
	List *l = (List*)malloc(sizeof(List));
	printf("TC#01: ADD FIRST NODE TO NULL LIST\n");
	addFirst(l, 1);
	printList(l);
	printf("SIZE = %d\n\n",getSize(l));
	free(l);

	l = (List*)malloc(sizeof(List));
	printf("TC#02: ADD LAST NODE TO NULL LIST\n");
	addLast(l, 1);
	printList(l);
	printf("SIZE = %d\n\n",getSize(l));
	free(l);

	l = (List*)malloc(sizeof(List));
	printf("TC#03: DEL FIRST NODE TO NULL LIST\n");
	delFirst(l);
	printList(l);
	printf("SIZE = %d\n\n",getSize(l));
	free(l);

	l = (List*)malloc(sizeof(List));
	printf("TC#04: DEL LAST NODE TO NULL LIST\n");
	delLast(l);
	printList(l);
	printf("SIZE = %d\n\n",getSize(l));
	free(l);
	
	l = (List*)malloc(sizeof(List));
	printf("TC#05: ADD FIST NODE TO ONE-NODE LIST\n");
	addFirst(l, 1);
	printList(l);
	addFirst(l, 2);
	printList(l);
	printf("SIZE = %d\n\n",getSize(l));
	free(l);
	
	l = (List*)malloc(sizeof(List));
	printf("TC#06: ADD LAST NODE TO ONE-NODE LIST\n");
	addFirst(l, 1);
	printList(l);
	addLast(l, 2);
	printList(l);
	printf("SIZE = %d\n\n",getSize(l));
	free(l);

	return 1;
}

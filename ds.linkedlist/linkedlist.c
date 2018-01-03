#include<stdio.h>
#include<stdlib.h>
#include "linkedlist.h"

void addFirst(List *l, int d) {
	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->data = d;
	new_node->next = NULL;

	if(l->first == NULL){
		l->first = new_node;
	} else {
		new_node->next = l->first;
		l->first = new_node;
	}
}

void addLast(List *l, int d) {
	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->data = d;
	new_node->next = NULL;

	if(l->first == NULL){
		l->first = new_node;
	} else {
		Node* ptr = l->first;
		while(ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new_node;
	}
}

void delFirst(List* l){
	Node* temp;
	
	if(l->first != NULL) {	
		if(l->first->next == NULL) {
			temp = l->first;
			l->first = NULL;
		} else {
			temp = l->first;
			l->first = l->first->next;
		}
		free(temp);
	}
}

void delLast(List* l){
	Node* temp;
	
	if(l->first != NULL) {	
		if(l->first->next == NULL) {
			temp = l->first;
			l->first = NULL;
		} else {
			Node* ptr = l->first;
			while(ptr->next->next != NULL)
				ptr = ptr->next;
			temp = ptr->next;
			ptr->next = NULL;
		}
		free(temp);
	}
}

void printList(List* l){
	Node* temp = l->first;
	printf("FIRST ");
	while(temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("LAST\n");
}

int getSize(List* l) {
	int size = 0;
	Node* temp = l->first;
	while(temp != NULL) {
		size++;
		temp = temp->next;
	}
	return size;
}

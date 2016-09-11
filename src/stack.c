#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define CAPACITY 10

typedef struct Stack {
	int size;
	int *elements[CAPACITY];
}Stack;

Stack * createStack() {

	Stack *S;
	S = (Stack *) malloc(sizeof(Stack));
	S->size = 0;

	return S;

}

char *pop(Stack *S) {

	if(S->size == 0) {

		return NULL;

	} else {

		char *element = S->elements[S->size - 1];
		S->size--;

		return element;

	}
}

char *peek(Stack *S) {

	if(S->size == 0) {

		return NULL;

	} else {

		return S->elements[S->size - 1];

	}
}

int push(Stack *S, char *element) {
	
	if (S->size == CAPACITY) {

		return -1;

	} else {

		S->elements[S->size++] = element;
		return 0;

	}
}

#include <stdio.h>
#include "stack.h"

int main() {
	Stack *S = createStack();
	push(S, "First");
	char *element = peek(S);
	printf("%s\n", element);
	element = "Second";
	printf("Tried to change element. Element is now: %s\n", element);
	printf("Peek now returns: %s\n", peek(S));
	printf("And pop returns: %s\n", pop(S));
}

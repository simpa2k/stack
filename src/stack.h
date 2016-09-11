typedef struct Stack Stack;
Stack * createStack();
char *pop(Stack *S);
char *peek(Stack *S);
int getSize(Stack *S);
int push(Stack *S, char *element);

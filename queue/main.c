#include <stdio.h>
#include <stdlib.h>

#include<malloc.h>

#define STACK_INIT_SIZE 1

typedef struct stack{
    int* base;
    int* top;
    int stacksize;
}Stack;

Stack initstack(Stack S){
    S.base = (int*) malloc(sizeof(int)*STACK_INIT_SIZE);

    S.top = S.base;
    S.stacksize = STACK_INIT_SIZE;
    printf("queue init successfully!\n");
    return S;
}

Stack push(Stack S){
    if(S.top-S.base==S.stacksize){
        printf("the queue is full \n");//Õ»Âú
        S.base = (int*) realloc(S.base,sizeof(int)*(STACK_INIT_SIZE+S.stacksize));
        S.stacksize = S.stacksize+STACK_INIT_SIZE;
    }

    int e;
    printf("input number u want to push into the queue :");
    scanf("%d",&e);

    *S.top = e;
    S.top = S.top+1;
    printf("push successfully\n");
    return S;
}


Stack pop(Stack S){
    if(S.base==S.top){
        printf("the queue is empty\n");
        return S;
    }

    printf("pop number : %d\n",*(S.base));
    S.base = S.base + 1;
    return S;
}


int main()
{
    Stack S;
    S = initstack(S);
    S = pop(S);
    S = push(S);
    S = push(S);
    S = pop(S);
    S = pop(S);

    return 0;
}

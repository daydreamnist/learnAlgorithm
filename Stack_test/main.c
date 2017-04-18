#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>

#define STACK_INIT_SIZE 1
#define STACKINCREMENT 10

typedef struct stack{
    int* base;
    int* top;
    int stacksize;
}Stack;

Stack initstack(Stack S){
    S.base = (int*) malloc(sizeof(int)*STACK_INIT_SIZE);

    S.top = S.base;
    S.stacksize = STACK_INIT_SIZE;
    printf("stack init successfully!\n");
    return S;
}

Stack push(Stack S){
    if(S.top-S.base==S.stacksize){
        printf("the stack is full \n");//Õ»Âú
        S.base = (int*) realloc(S.base,sizeof(int)*(STACK_INIT_SIZE+S.stacksize));
        S.stacksize = S.stacksize+STACK_INIT_SIZE;
    }

    int e;
    printf("input number u want to push into the stack :");
    scanf("%d",&e);
    S.top = S.top+1;
    *S.top = e;
    printf("push successfully\n");
    return S;
}


Stack pop(Stack S){
    if(S.base==S.top){
        printf("the stack is empty\n");
        return S;
    }

    printf("pop number : %d\n",*S.top);
    S.top = S.top - 1;
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

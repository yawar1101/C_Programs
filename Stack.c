#include <stdio.h>
#include <stdlib.h>

int MAXSIZE = 8;
int stack[8];
int top = -1;

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if (top == MAXSIZE)
        return 1;
    else
        return 0;
}

int peek()
{
    return stack[top];
}

int pop()
{
    int data;

    if (!isEmpty())
    {
        data = stack[top];
        top--;
        return data;
    }
    else
        printf("Could not retrieve data, Stack is Empty.\n");
}

int push(int data)
{
    if (!isFull())
    {
        top++;
        stack[top] = data;
    }
    else
        printf("Could not insert data, Stack is Full.\n");
}

int main()
{
    push(3);
    push(5);
    push(9);
    push(1);
    push(12);
    push(15);

    printf("Element at the top of stack: %d\n", peek());
    printf("Elements: \n");

    while (!isEmpty())
    {
        int data = pop();
        printf("%d\n", data);
    }

    printf("Stack Full; %s\n", isFull() ? "true" : "false");
    printf("Stack Empty; %s\n", isEmpty() ? "true" : "false");
}

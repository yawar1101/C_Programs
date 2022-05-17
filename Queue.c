#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 6

int arr[MAX];
int front = 0;
int rear = -1;
int itemCount = 0;

int peek()
{
    return arr[front];
}

bool isEmpty()
{
    return itemCount == 0;
}

bool isFull()
{
    return itemCount == MAX;
}

int size()
{
    return itemCount;
}

void enQueue(int data)
{
    if (!isFull())
    {
        if (rear == MAX - 1)
        {
            rear = -1;
        }
        arr[++rear] = data;
        itemCount++;
    }
}

int deQueue()
{
    int data = arr[front++];
    if (front == MAX)
        front = 0;

    itemCount--;
    return data;
}

int main()
{
    enQueue(3);
    enQueue(5);
    enQueue(9);
    enQueue(1);
    enQueue(12);

    while (!isEmpty())
    {
        int n = deQueue();
        printf("%d, ", n);
    }
}
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

void display(struct Node *temp)
{
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void insertLast(int val)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = val;
    t->next = NULL;
    if (head == NULL)
        head = tail = t;
    else
    {
        tail->next = t;
        tail = t;
    }
}

int Delete(int idx)
{
    struct Node *p, *q;
    int x;
    if (idx == 1)
    {
        x = head->data;
        p = head;
        head = head->next;
        free(p);
    }
    else
    {
        p = head;
        q = NULL;
        for (int i = 0; i < idx - 1 && p != NULL; i++)
        {
            q = p;
            p = p->next;
        }

        if (p != NULL)
        {
            q->next = p->next;
            x = p->data;
            free(p);
        }
    }
    return x;
}

int main()
{
    insertLast(10);
    insertLast(11);
    insertLast(12);
    display(head);
    // Delete(1);
    Delete(2);
    printf("\n");
    display(head);
}
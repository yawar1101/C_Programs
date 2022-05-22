#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *head = NULL;

void display(struct Node *tempNode)
{
    while (tempNode != NULL)
    {
        printf("%d ", tempNode->data);
        tempNode = tempNode->next;
    }
}

int count(struct Node *p)
{
    int ctr = 0;
    while (p != NULL)
    {
        ctr++;
        p = p->next;
    }
    return ctr;
}

int sum(struct Node *p)
{
    int sum = 0;
    while (p != NULL)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int max(struct Node *p)
{
    int m = INT_MIN;
    while (p)
    {
        if (p->data > m)
            m = p->data;
        p = p->next;
    }
    return (m);
}

int min(struct Node *p)
{
    int m = INT_MAX;
    while (p)
    {
        if (p->data < m)
            m = p->data;
        p = p->next;
    }
    return (m);
}

struct Node *Search(struct Node *p, int key)
{
    while (p)
    {
        if (key == p->data)
            return (p);
        p = p->next;
    }
    return NULL;
}

void insert(struct Node *p, int idx, int x)
{
    struct Node *t;

    if (idx < 0 || idx > count(p))
        return;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;

    if (idx == 0)
    {
        t->next = head;
        head = t;
    }
    else
    {
        for (int i = 0; i < idx - 1 && p != NULL; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}
int main()
{
    // struct Node *temp;
    // struct Node *one = NULL;
    // struct Node *two = NULL;
    // struct Node *three = NULL;

    // one = (struct Node *)malloc(sizeof(struct Node));
    // two = (struct Node *)malloc(sizeof(struct Node));
    // three = (struct Node *)malloc(sizeof(struct Node));

    // one->data = 1;
    // two->data = 2;
    // three->data = 3;
    // one->next = two;
    // two->next = three;
    // three->next = NULL;

    // head = one;
    insert(head, 0, 1);
    insert(head, 1, 2);
    insert(head, 2, 12);
    // insert(head, 2, 12);
    // insert(head, 3, 13);
    // insert(head, 0, 11);

    display(head);
    // printf("\nNumber of nodes = %d", count(head));
    // printf("\nSum of linked list = %d", sum(head));
    // printf("\nMaximum element in the linked list = %d", max(head));
    // printf("\nMinimum element in the linked list = %d", min(head));
    // // printf("\nElement is at the location = %d", Search(head, 2));
    // temp = Search(head, 2);
    // if (temp != NULL)
    //     printf("\nKey is found %d", temp->data);
    // else
    //     printf("\nKey is not found");
}
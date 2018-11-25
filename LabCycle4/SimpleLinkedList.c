#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int data;
    struct node *next, *prev;
} node;
node *HEAD = NULL;
node *ptr = NULL;
void InsertH();
void InsertT();
void DeleteH();
void DeleteT();
void Display();

void main()
{
    int n, ch;

    printf("Enter the number of initial elements\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        InsertH();
    }

    do
    {
        printf("Enter choice\n1.Insert at head\n2.Insert at tail\n3.Delete from head\n");
        printf("4.Delete from tail\n5.Diplay\n6.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            InsertH();
            break;
        case 2:
            InsertT();
            break;
        case 3:
            DeleteH();
            break;
        case 4:
            DeleteT();
            break;
        case 5:
            Display();
            break;
        case 6:
            break;
        default:
            printf("Wrong choice\n");
        }

    } while (ch != 6);
}
void InsertH()
{
    node *new = (node *)malloc(sizeof(node));
    printf("enter a value\n");
    scanf("%d", &(new->data));
    new->next = NULL;
    new->prev = NULL;

    if (HEAD == NULL)
    {
        HEAD = new;
        ptr = new;
    }
    else
    {
        ptr->next = new;
        new->prev = ptr;
        ptr = new;
    }
}
void InsertT()
{
    node *ptr = (node *)malloc(sizeof(node));
    node *ptr1 = (node *)malloc(sizeof(node));

    ptr = HEAD;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    node *ptr = (node *)malloc(sizeof(node));

    printf("input an element\n");
    scanf("%d", &(ptr1->data));
    ptr1 = ptr->next;
    ptr = ptr1->prev;
    ptr1->next = NULL;
}
void DeleteH()
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr = HEAD;
    HEAD = HEAD->next;
    free(ptr);
}
void DeleteT()
{
    node *ptr = (node *)malloc(sizeof(node));
    node *ptr1 = (node *)malloc(sizeof(node));

    ptr = HEAD;
    while (ptr->next != NULL)
    {
        ptr1 = ptr;
        ptr = ptr->next;
    }
    ptr1->next = NULL;
    free(ptr);
}
void Display()
{
    node *ptr = HEAD;
    while (ptr->next != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("%d\t", ptr->data);
    printf("\n");
}
#include <stdio.h>
#include <stdlib.h>
int s = 100;
int a[100];
void enqueue();
void dequeue();
void display();
void peek();
int r = - 1;
int f = - 1;
void main()
{
    int x;
    while (1)
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.End\nEnter the choice: ");
        scanf("%d", &x);
        switch (x)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
            case 5:
            exit(0);
            default:
            printf("\nPlease enter correct option");
        } 
    } 
} 
 
void enqueue()
{
    int x;
    if (r == s - 1)
       printf("Overflow \n");
    else
    {
        if (f == - 1)
        f = 0;
        printf("Element to be added: ");
        scanf("%d", &x);
        r = r + 1;
        a[r] = x;
    }
} 
 
void dequeue()
{
    if (f == - 1 || f > r)
    {
        printf("Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from the Queue: %d\n", a[f]);
        f = f + 1;
    }
} 
 
void display()
{
    if (f == - 1)
        printf("Empty Queue\n");
    else
    {
        printf("Queue: \n");
        for (int i = f; i <= r; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
}

void peek()
{
    if (f == -1)
    {
        printf("\nEmpty Queue");
    }
    else
    {
        printf("\nTop element is %d",a[f]);
    }
}
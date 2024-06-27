#include <stdio.h>
#include <stdlib.h>
int s = 100;
int top = -1, a[100];
void push();
void pop();
void peek();
void display();

int main()
{
    int x;

    while (1)
    {
        printf("\nPerform operations on the stack:\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.End\nEnter the choice: ");
        scanf("%d", &x);

        switch (x)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
        case 5:
            exit(0);

        default:
            printf("\nPlease enter correct option");
        }
    }
}

void push()
{
    int x;

    if (top == s - 1)
    {
        printf("\nOverflow");
    }
    else
    {
        printf("\nEnter the element to be added: ");
        scanf("%d", &x);
        top = top + 1;
        a[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nUnderflow");
    }
    else
    {
        printf("\nPopped element is: %d", a[top]);
        top = top - 1;
    }
}

void peek()
{
    if (top == -1)
    {
        printf("\nUnderflow");
    }
    else
    {
        printf("\nTop element is %d",a[top]);
    }

}

void display()
{
    if (top == -1)
    {
        printf("\nUnderflow");
    }
    else
    {
        printf("\nElements in stack are: \n");
        for (int i = top; i >= 0; --i)
            printf("%d\n", a[i]);
    }
}
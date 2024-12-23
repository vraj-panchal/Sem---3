#include <stdio.h>

#define N 5

int stack[N];
int top = -1;

void push()
{
    int x;
    printf("Enter Data: ");
    scanf("%d", &x);

    if (top == N - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        int item = stack[top];
        top--;
        printf("Popped: %d\n", item);
    }
}

void peep()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top element: %d\n", stack[top]);
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n Enter the choice \n");
        printf("1: Push \n");
        printf("2: Pop \n");
        printf("3: Peep \n");
        printf("4: Display \n");
        printf("0: Exit: \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            display();

            break;
        case 2:
            pop();
            break;
        case 3:
            peep();
            break;
        case 4:
            display();
            break;
        case 0:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice\n");
        }
    } while (choice != 0);

    return 0;
}

#include <stdio.h>
#define SIZE 3

int a[SIZE];
int r = -1; // rear
int f = -1; // front

void insert();
void display();
void delete();

void insert() 
{
    if (r == SIZE - 1) 
    {
        printf("\nQueue is full\n");
    } 
    else 
    {
        int value;

        printf("\nEnter the value: ");
        scanf("%d", &value);
        
        if (f == -1) 
        {
            f = 0; // Set front to 0 when first element is added
        }
        
        r++;
        a[r] = value;
    }
}

void display() 
{
    if (f == -1 || f > r) 
    {
        printf("\nQueue is empty\n");
    } 
    else 
    {
        printf("\nQueue elements: ");
        for (int i = f; i <= r; i++) 
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}

void delete() 
{
    if (f == -1 || f > r) 
    {
        printf("\nQueue is empty (underflow)\n");
    } 
    else 
    {
        printf("\nDeleted element: %d\n", a[f]);
        f++;
        
        // Reset the queue if all elements are deleted
        if (f > r) 
        {
            f = r = -1;
            printf("\nQueue is reset\n");
        }
    }
}

int main() 
{
    int choice;

    while (1) 
    {
        printf("\n1. Insert");
        printf("\n2. Display");
        printf("\n3. Delete");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                insert();
                break;

            case 2:
                display();
                break;
            case 3:

                delete();
                break;
            case 4:

                printf("\nThank you\n");
                return 0;
                
            default:
                printf("\nInvalid choice\n");
        }
    }
    return 0;
}
